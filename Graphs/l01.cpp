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

//Graph Representation

int main(){_
    // Adjacency Matrix
    // Space requirement O(n^2)
    // if n = 10^5, space = 40 GB


    // Adjacency List (for each node, prepare a list), used most of the problems
    // here an example

    // N = num nodes , ptbr = vertices
    // M = num edges , ptbr = arestas
    int n, m;

    vector<int> g[n + 1];

    while(m--){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

}
