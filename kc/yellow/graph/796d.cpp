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

vector<vector<pii>> adj;
vector<bool> vis;

void solve() {
    int n,k,d;cin>>n>>k>>d;
    adj.resize(n+1);
    vis.resize(n+1, 0);
    // map<pair<int,int>, int> roadtoidx;
    queue<pii> q;
    vector<bool> potong(n,0);
    int ans=0;
    for(int i=0;i<k;i++) {
        int p;cin>>p;
        q.push({p,0});
    }
    for(int i=1;i<n;i++) {
        int a,b;cin>>a>>b;
        adj[a].pb({b,i});
        adj[b].pb({a,i});
        // roadtoidx[{a,b}]=i;
    }
    while(!q.empty()) {
        int curr=q.front().fs;
        int idx=q.front().sc;
        q.pop();
        if(vis[curr]) continue;
        vis[curr]=true;
        for(auto node:adj[curr]) {
            if(node.fs!=idx) {
                if(vis[node.fs]) {// udah pernah
                    potong[node.sc]=true;
                }
                else q.push({node.fs, curr});
            }
        }
    }
    for(int i=1;i<n;i++) {
        if(potong[i]) ans++;
    }
    cout << ans << '\n';
    for(int i=1;i<n;i++) {
        if(potong[i])cout<<i<<' ';
    }
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
