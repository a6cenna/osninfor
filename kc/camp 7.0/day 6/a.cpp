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
#define ti3 tuple<int,int,int>

void solve() {
    int n,m;cin>>n>>m;
    
    vector<pii> a[n+5];
    for(int i=1;i<=m;i++) {
        int b,c,w;cin>>b>>c>>w;
        a[b].pb({c,w});
        a[c].pb({b,w});
    }
    priority_queue<ti3,vector<ti3>,greater<ti3>> pq;
    pq.push({0, 1, 0});

    int dist[n+5];
    int prev[n+5]; prev[1]=0;
    memset(dist, -1, sizeof(dist));
    dist[1]=0;

    while(!pq.empty()) {
        auto [cur, idx, previdx] = pq.top();
        pq.pop();
        if(dist[idx]!=-1&&idx!=1) continue;
        dist[idx]=cur;
        prev[idx]=previdx;


        for(auto [nxtnode, w]:a[idx]) {
            if(dist[nxtnode]==-1) {
                pq.push({cur+w,nxtnode,idx});
            }
        }
    }
    vector<int> ans;
    if(dist[n]==-1) {
        cout << -1 << '\n';return;
    }
    int now=n;
    while(now!=0) {
        ans.pb(now);
        now=prev[now];
    }

    for(int i=ans.size()-1;i>=0;i--) {
        cout << ans[i] << ' ';
    }
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
