// graph representation using Matrix
#include<iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int adj[n+1][n+1];

    // Initialize the adjacency matrix with zeros
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= n; j++) {
            adj[i][j] = 0;
        }
    }

    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }

    // For testing purposes, you can print the adjacency matrix
    // to verify that it is correctly populated
    for(int i = 1; i <= n; i++) {
        cout<<i<<" |"<<" ";
        for(int j = 1; j <= n; j++) {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
