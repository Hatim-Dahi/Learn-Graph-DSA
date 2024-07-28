#include <vector>
#include <queue>
#include <iostream>

using namespace std;
void BFS(vector<int> adj[], int n, int m){
    int vis[n]={0};
    vis[1]=1;
    queue<int>q;
    q.push(1);
    while(!q.empty()){
        int node=q.front(); q.pop();
        cout<<node<<" ";
        for(auto i:adj[node]){
            if(vis[i]==0){
                vis[i]=1;
                q.push(i);
            }
        }
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>adj[n+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
     // Printing the adjacency list to check
    for (int i = 1; i <= n; i++) {
        cout << "Node " << i << ": ";
        for (int j : adj[i]) {
            cout << j << " ";
        }
        cout << endl;
    }

    cout<<"BFS traversal"<<endl;
    BFS(adj, n,m);
    return 0;
}