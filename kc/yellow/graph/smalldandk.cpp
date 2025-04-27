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
vector<int> dist;

void solve() {
    int n,m;cin>>n>>m;

    adj.resize(n+1);
    dist.resize(n+1, -1);

    for(int i=0;i<m;i++) {
        int a,b;cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    int q;cin>>q;
    while(q--) {
        dist.assign(n+1,-1);
        int x,k;cin>>x>>k;
        queue<int>q;
        q.push(x);
        dist[x]=0;
        int ans=0;
        ans+=x;
        while(!q.empty()) {
            int curr=q.front();
            q.pop();
            if(dist[curr]>=k) continue;
            for(auto node:adj[curr]) {
                if(dist[node]==-1) {
                    dist[node]=dist[curr]+1;
                    if(dist[node]<=k) ans+=node;
                    q.push(node);
                }
            }
        }
        cout << ans << '\n';
    }

}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
