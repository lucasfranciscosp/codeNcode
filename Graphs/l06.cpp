#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define dbg(x) cout << #x << " = " << x << endl
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
using namespace std;
 
// Ver se existe ciclo ou não no grafo com DFS
 
vector<int> g[2001], vis(2001, 0);
 
bool dfs(int node, int par){
    vis[node] = 1;
 
    for(int child: g[node]){
        if (!vis[child]){
            
            if(dfs(child, node) == true)
            return true;                   
 
        }else if(child != par){
            return true;
        }
        
    }
    return false;
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
        }
 
        for(int j= 0; j < m; j++){
	        int a,b;
	        cin>>a>>b;
	        g[a].push_back(b);
	        g[b].push_back(a);
        }
        
        
    }
    return 0;
} 