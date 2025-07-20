// author: sofwant || a6cenna

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
vector<int> distf;

bool dfs(int cur, int par, int vlad) {
    if(distf[cur]<=vlad) return false;
    if(cur!=1&&adj[cur].size()==1) return true;
    for(auto node:adj[cur]) {
        if(node!=par) if(dfs(node, cur, vlad+1)) return true;
    }
    return false;
}

void solve() {
    int n,k;cin>>n>>k;
    adj.clear();
    distf.clear();
    adj.resize(n+1);
    distf.resize(n+1, -1);
    
    queue<int> q;
    while(k--) {
        int x;cin>>x;
        distf[x]=0;
        q.push(x);
    }
    for(int i=0;i<n-1;i++) {
        int a,b;cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    while(!q.empty()) {
        int cur=q.front();
        q.pop();
        for(auto node:adj[cur]) {
            if(distf[node]!=-1) continue;
            q.push(node);
            distf[node]=distf[cur]+1;
        }
    }

    cout << (dfs(1, 0, 0)?"YES":"NO") << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
