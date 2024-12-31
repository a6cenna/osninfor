#include <bits/stdc++.h>

using namespace std;
vector<vector<int>> adj;
vector<bool> visited;
int alrv=0;
vector<int> connected;
vector<int> notconnected;

void dfs(int x) {
    if(visited[x]) return;
    visited[x] = true;
    connected.push_back(x);
    alrv++;
    for (auto nb:adj[x]) {
        dfs(nb);
    }
}

void solve() {
    int n,m;cin>>n>>m;
    adj.resize(n+1);
    visited.resize(n+1, false);
    while(m--) {
        int x,y;cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(1);
    int need=0;
    for (int i = 2; i <= n; i++)
    {
        if(!visited[i]) {
            dfs(i);
            notconnected.push_back(i);
            need++;
        } 
    }
    cout << need << '\n';
    for (int i = 0; i < need; i++)
    {
        cout << connected[i] << " " << notconnected[i] << '\n'; 
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
