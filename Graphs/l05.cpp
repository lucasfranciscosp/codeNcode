#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define dbg(x) cout << #x << " = " << x << endl
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
using namespace std;
 
// Grafo bi partido
 
vector<int> g[2001], vis(2001, 0), col(2001, -1);
 
bool dfs(int node, int color){
    vis[node] = 1;
    col[node] = color;
 
    for(int child: g[node]){
    	if(col[node] == col[child])
        	return false;
        if (!vis[child]){
            
            if(dfs(child, color^1) == false)
            return false;                   
 
        }
        
    }
    return true;
}
 
int main(){_
    // N = num nodes , ptbr = vertices
    // M = num edges , ptbr = arestas
 
    int h;cin>>h;
    int n, m;
    
    for(int t =0; t < h; t++){
        
        cin>>n>>m;
 
        for(int i=0;i<=n;i++) {
            g[i].clear(); 
            vis[i] = 0;
            col[i] = -1;
        }
 
        for(int j= 0; j < m; j++){
	        int a,b;
	        cin>>a>>b;
	        g[a].push_back(b);
	        g[b].push_back(a);
        }
        bool bipartido = true;
        
        for(int j=1;j<=n;j++){
        	if (vis[j]) continue;
            bool bipartidoaux = dfs(j, 1); // comecando no vertice j com cor 1
            if (bipartidoaux == false)
            bipartido = false;
 
        }
 
        
        cout<<"Scenario #"<<t+1<<":"<<endl;
 
        if (bipartido){
            cout<<"No suspicious bugs found!"<<endl ;
        }
        
        else{
            cout<<"Suspicious bugs found!"<<endl;
        }
        
        
        
    }
    return 0;
} 