// in the pool

#include <bits/stdc++.h>
using namespace std;

#define suffering_leaves_suffering_leaves ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back

vector<vector<int>> adj;
vector<bool> vis;
vector<int> dist;
vector<int> dist1;
int target;

bool dfs(int cur, int par) {
    vis[cur]=true;
    for(auto node:adj[cur]) {
        if(node==par) continue;
        if(vis[node]) {
            target=node;
            return true;
        }
        if (dfs(node, cur)) return true;
    }
    return false;
}

void solve() {
    int n,a,b;cin>>n>>a>>b;
    adj.clear();
    dist.clear();
    dist1.clear();
    vis.clear();
    adj.resize(n+1);
    dist.resize(n+1, -1);
    dist1.resize(n+1, -1);
    vis.resize(n+1, false);
    target=-1;
    for(int i=0;i<n;i++) {
        int x,y;cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    dfs(b,-1);
    queue<int> q,q1;
    q.push(a);
    dist[a]=0;
    while(!q.empty()) {
        int cur=q.front();
        q.pop();
        for(auto node:adj[cur]) {
            if(dist[node]!=-1) continue;
            dist[node]=dist[cur]+1;
            q.push(node);
        }
    }
    q1.push(b);
    dist1[b]=0;
    while(!q1.empty()) {
        int cur=q1.front();
        q1.pop();
        for(auto node:adj[cur]) {
            if(dist1[node]!=-1) continue;
            dist1[node]=dist1[cur]+1;
            q1.push(node);
        }
    }

    cout << (dist1[target]<dist[target]?"YES":"NO") << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
