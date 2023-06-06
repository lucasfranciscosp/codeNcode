#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define f first
#define s second
#define ou ||
#define dbg(x) cout << #x << " = " << x << endl
#define forn(i, n) for (int i = 0; i < int(n); i++)
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
using namespace std;

//Depth First Search (DFS)

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

    while(m--){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    dfs(1);
}
