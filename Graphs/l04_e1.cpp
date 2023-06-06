#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define dbg(x) cout << #x << " = " << x << endl
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
using namespace std;

// SSSP , achar a menor distância de um ponto até outros em uma árvore

// Utiliza DFS com um vetor de distancia de um vertice escolhido
// entao utiliza uma variavel para somar 1 cada vez que vai para um vertice proximo na DFS

vector<int> g[1001], vis(1001, 0), dis(1001, 0);

void dfs(int v, int distance){
    vis[v] = 1;
    dis[v] = distance;
    for(int child: g[v]){
        if (!vis[child]){
            dfs(child, distance + 1);
        }
    }
}

int main(){_
    // N = num nodes , ptbr = vertices
    // M = num edges , ptbr = arestas
    int n, m ;
    cin>>n;
    m = n - 1;
    int cc_count = 0;
    
    while(m--){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    dfs(1, 0); // Aqui o vertice escolhido com distancia 0 de si mesmo
    int girls; cin>>girls;
    vector<int> gi;
    for(int i=0; i < girls;i++){
        int girl;cin>>girl;
        gi.push_back(girl);
    }
    int girlfriend = INF, disaux = INF;
    for(int i = 0 ; i < girls ; i++){
        if (dis[gi[i]] <= disaux && gi[i] < girlfriend){
            girlfriend = gi[i];
            disaux = dis[gi[i]];
        }
    }
    cout<<girlfriend<<endl;
    return 0;
}
