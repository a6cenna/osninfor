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
vector<int> kapan;
vector<int> tetangga;

void solve() {
    int n,k;cin>>n>>k;
    adj.assign(n+1, vector<int>());
    kapan.assign(n+1, 0);
    tetangga.assign(n+1, 0);
    for(int i=1;i<n;i++) {
        int a,b;cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
        tetangga[a]++;
        tetangga[b]++;
    }
    queue<int> q;
    for(int i=1;i<=n;i++) {
        // leave starting pointnya
        if(tetangga[i]==1) {
            kapan[i]=1;
            q.push(i);
        }
    }
    while(!q.empty()) {
        int curr=q.front();
        q.pop();
        for(auto node:adj[curr]) {
            if(tetangga[node]>1) {
                tetangga[node]--;
                if(tetangga[node]==1) {
                    kapan[node]=kapan[curr]+1;
                    q.push(node);
                }
            }
        }
    }
    int ans=0;
    for(int i=1;i<=n;i++) {
        if(kapan[i]>k) ans++;
    }
    cout << ans << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
