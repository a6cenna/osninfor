#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back

vector<vector<int>> adj;
vector<bool> vis;
vector<int> b;

vector<vector<int>> connected;
vector<int> cur;

void dfs(int node) {
    vis[node]=1;
    cur.pb(b[node-1]);
    for(auto nxt:adj[node]){
        if(!vis[nxt]) {
            dfs(nxt);
        } 
    }
}

void solve() {
    int n,m,k;cin>>n>>m>>k;
    adj.resize(n+1);
    vis.resize(n+1,0);
    b.resize(n);
    vector<int> g(m);
    for(int i=0;i<n;i++) cin>>b[i];
    for(int i=0;i<m;i++) cin>>g[i];
    sort(g.begin(), g.end());
    for(int i=0;i<k;i++) {
        int p,q;cin>>p>>q;
        adj[p].pb(q);
        adj[q].pb(p);
    }
    for(int i=1;i<=n;i++) {
        if(vis[i]) continue;
        dfs(i);
        sort(cur.begin(), cur.end());
        connected.pb(cur);
        cur.clear();
    }
    int ans=0;
    if(m<=10) {
        for(auto v:connected) {
            int sumtotal=LLONG_MAX;
            for(auto harga:g) {
                int sumtmp=0;
                for(auto x:v) {
                    sumtmp+=abs(x-harga);
                }
                sumtotal=min(sumtotal, sumtmp);
            }
            ans+=sumtotal;
        }
        cout << ans << '\n';
        return;
    }
    for(auto v:connected) {
        int med=-1;
        if(v.size()%2==0) {
            med=(v[v.size()/2]+v[v.size()/2-1])/2;
        }
        else {
            med=v[v.size()/2];
        }
        int batas=lower_bound(g.begin(), g.end(), med)-g.begin();
        int tmp=LLONG_MAX;
        if(batas!=g.size()) {
            tmp=0;
            for(auto x:v) {
                tmp+=abs(x-g[batas]);
            }
        }
        // cout << tmp << "debug tmp\n";
        int tmp1=LLONG_MAX;
        if(batas-1>=0) {
            tmp1=0;
            for(auto x:v) {
                tmp1+=abs(x-g[batas-1]);
            }
        }
        // cout << tmp1 << "debug tmp1\n";
        ans+=min(tmp,tmp1);
    }

    cout << ans << '\n';
}

signed main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);

    solve();
}
