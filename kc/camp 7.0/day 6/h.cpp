// author: sofwant || a6cenna

#include <bits/stdc++.h>
using namespace std;

#define suffering_leaves_suffering_leaves ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define int ll
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back
#define ti3 tuple<int,int,int>

void solve() {
    int n,m,x,y;cin>>n>>m>>x>>y;

    vector<ti3> a[n+5];
    while(m--) {
        int y1,y,t,k;cin>>y1>>y>>t>>k;
        a[y1].pb({y,t,k});
        a[y].pb({y1,t,k});
    }
    priority_queue<pii,vector<pii>,greater<pii>> pq;
    pq.push({0, x});

    int dist[n+5];
    memset(dist, -1, sizeof(dist));
    dist[x]=0;

    while(!pq.empty()) {
        auto [cur, idx]=pq.top();
        pq.pop();
        if(dist[idx]!=-1&&idx!=x) continue;
        dist[idx]=cur;
        for(auto [nxt,t,k]:a[idx]) {
            if(dist[nxt]==-1) {
                pq.push({ceil((double)cur/k)*k+t,nxt});
            }
        }
    }

    // for(int i=1;i<=n;i++) cout << dist[i] << '\n';
    // for(auto [x,t,k]:a[x]) cout << x<< ' ' << y << ' ' << t << '\n';
    cout << dist[y];
}

signed main() {
    suffering_leaves_suffering_leaves

    solve();
}
