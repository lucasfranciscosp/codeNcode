#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define dbg(x) cout << #x << " = " << x << endl
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
using namespace std;

// Counting connected components, ptbr = Contando componentes conexos

// Just use DFS for each i which is not visited
// when the graph is not direcional

// Só usar DFS pra cada vertice i, como ele vai percorrer o grafo inteiro
// Basta fazer uma variável que soma toda vez que chamar a dfs

vector<int> g[1001], vis(1001, 0);

void dfs(int v){
    vis[v] = 1;
    cout<<v<<"-> ";
    for(int child: g[v]){
        if (!vis[child]){
            dfs(child);
        }
    }
}

int main(){_
    // N = num nodes , ptbr = vertices
    // M = num edges , ptbr = arestas
    int n, m ;

    int cc_count = 0;
    
    while(m--){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    for(int i=1; i <= n;i++){
        if(!vis[i]){
            dfs(i);
            cc_count += 1;
        }
    }
    cout<<cc_count<<endl;
}
