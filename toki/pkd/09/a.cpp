#include <bits/stdc++.h>

using namespace std;

// visited array
// adjacency list
int n, m;

vector<vector<int>> node;
vector<bool> visited;


void dfs(int curr) {
    if(visited[curr]) {
        return;
    }
    visited[curr]=true;
    for(auto adj:node[curr]) {
        dfs(adj);
    }
}   

int main() {
    cin>>n>>m;
    node.resize(n+1);
    int ans=0;
    visited.resize(n, false);
    for(int i=0;i<m;i++) {
        int u,v;cin>>u>>v;
        node[u].push_back(v);
        node[v].push_back(u);
    }

    for(int i=1;i<=n;i++) {
        if(!visited[i]) {
            dfs(i);
            ans++;
        }
    }

    cout << ans;
}
