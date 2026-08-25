// war without reason

#include <bits/stdc++.h>
using namespace std;

#define war_without_reason ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back

const int N=1e5, INF=1e9;

vector<vector<pii>> adj(N+5);

void solve() {
    int n,m;cin>>n>>m;

    for(int i=0;i<m;i++) {
        int u,v,w;cin>>u>>v>>w;
        adj[u].pb({v,w});
        adj[v].pb({u,w});
    }

    priority_queue<pii, vector<pii>, greater<pii>> pq; // biayanya sekarang, node skarang
    vector<int> dist(n+1, INF);
    pq.push({0, 1});
    dist[1]=0;
    while(!pq.empty()) {
        auto [curdist, curnode] = pq.top();
        pq.pop();
        if(curdist!=dist[curnode]) continue;
        for(auto [nxtnode, nxtweight]:adj[curnode]) {
            if(dist[nxtnode]>dist[curnode]+nxtweight) {
                dist[nxtnode]=dist[curnode]+nxtweight;
                pq.push({dist[nxtnode], nxtnode});
            }
        }
    }
}

int main() {
    war_without_reason

    solve();
}
