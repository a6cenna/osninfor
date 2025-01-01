#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> adj;
vector<bool> visited;

int reached=0;

void dfs(int node) {
    if(visited[node]) return;
    visited[node]=true;
    reached++;
    for(auto a:adj[node]) {
        if(!visited[a]) {
            dfs(a);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("moocast.in", "r", stdin);
    freopen("moocast.out", "w", stdout);

    int n;cin>>n;
    vector<pair<int, int>> coor(n+1);
    int p[n+1];
    
    for (int i = 1; i <= n; i++)
    {
        cin>>coor[i].first >> coor[i].second >> p[i];
    }

    adj.resize(n+1);
    visited.resize(n+1, 0);

    for(int i=1;i<=n;i++) {
        for (int j = 1; j <= n; j++)
        {
            int distx=coor[i].first-coor[j].first;
            int disty=coor[i].second-coor[j].second;
            if(distx*distx + disty*disty <= p[i]*p[i]) {
                adj[i].push_back(j);
            }
        }
    }

    int ans=1;

    for(int i=1;i<=n;i++) {
        if(!visited[i]) {
            fill(visited.begin(), visited.end(), 0);
            reached=0;
            dfs(i);
            ans=max(reached, ans);
        }
    }

    cout << ans;
}
