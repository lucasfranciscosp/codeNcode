    #include <bits/stdc++.h>
    #define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    #define endl '\n'
    #define dbg(x) cout << #x << " = " << x << endl
    typedef long long ll;
    const int INF = 0x3f3f3f3f;
    const ll LINF = 0x3f3f3f3f3f3f3f3fll;
    
    using namespace std;

    // Definir se é uma árvore
    // para isto basta que ela tenha somente 1 componente conexo
    // e que o num de arestas seja o num de vértices -1 

    // as duas condições precisam ser feitas

    // se somente a segunda condição fosse feita poderia ter um grafo
    // com somente um vertice sem nenhuma arestas e 3 vertices com 3 arestas
    // formando um ciclo, isto não é uma árvore mas tem num de arestas = num vertices - 1

    vector<int> g[10001], vis(10001, 0), dis(1001, 0);

    void dfs(int node){
        vis[node] = 1;
        for(int child : g[node]){
            if (!vis[child]){
                dfs(child);
            }
        }
    }


    int main(){_
        // N = num nodes , ptbr = vertices
        // M = num edges , ptbr = arestas
        int n, m ;
        cin>>n>>m;
        int cc_count = 0;
        int m_aux = m;
        
        while(m--){
            int a,b;
            cin>>a>>b;
            g[a].push_back(b);
            g[b].push_back(a);
        }
        for(int i =1 ; i <= n; i++){
            if (!vis[i]){
                dfs(i);
                cc_count +=1;
            }
        }
        if (cc_count == 1 && m_aux == n - 1) cout<< "YES" <<endl;
        else cout<<"NO"<<endl;
        return 0;
    }
