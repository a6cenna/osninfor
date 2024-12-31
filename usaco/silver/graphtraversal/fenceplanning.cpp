#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> adj;
vector<bool> visited;
vector<int> current;

void dfs(int n) {
    if(visited[n]) return;
    visited[n]=true;
    current.push_back(n);
    for(auto node:adj[n]) {
        if(!visited[node]) {
            dfs(node);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("fenceplan.in", "r", stdin);
    freopen("fenceplan.out", "w", stdout);

    int n,m;cin>>n>>m;
    
    vector<pair<int,int>> coor(n+1);
    adj.resize(n+1);
    visited.resize(n+1, false);

    for(int i=1;i<=n;i++) {
        int x,y;cin>>x>>y;
        coor[i].first=x;
        coor[i].second=y;
    }

    while(m--) {
        int x,y;cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    vector<vector<int>> groups;
    for (int i = 1; i <= n; i++)
    {
        if(!visited[i]){
            current.clear();
            dfs(i);
            groups.push_back(current);
        }
    }
    int ans=INT_MAX;
    for(auto group:groups) {
        int minx=INT_MAX;
        int maxx=INT_MIN;
        int miny=INT_MAX;
        int maxy=INT_MIN;
        for(auto i:group) {
            minx=min(minx, coor[i].first);
            maxx=max(maxx, coor[i].first);
            miny=min(miny, coor[i].second);
            maxy=max(maxy, coor[i].second);
        }

        ans=min(ans, 2*(maxx-minx + maxy-miny));
    }

    cout << ans;
}
