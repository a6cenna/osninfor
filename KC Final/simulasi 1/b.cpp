#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define pii pair<int,int> 
#define pb push_back
#define fs first
#define sc second

const int N=1e5,MOD=1e9+7;

vector<vector<int>> adj(N+5);

int binpow(int x, int y) {
    int res=1;
    while(y) {
        if(y%2) {
            res=res*x%MOD;
        }
        y/=2;
        x=x*x%MOD;
    }
    return res;
}

void solve() {
    int n,m;cin>>n>>m;
    vector<int> spcl(m);
    vector<bool> isspcl(n+1,0);
    for(int i=0;i<m;i++) {
        cin>>spcl[i];
        isspcl[spcl[i]]=1;
    }
    for(int i=1;i<n;i++) {
        int u,v;cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    if(m==1) {
        cout << 1 << '\n';
        return;
    }
    if(m==n) {
        cout << binpow(2, n-1)%MOD << '\n';
        return;
    }
    if(m==n-1) {
        int gkspcl=-1;
        for(int i=1;i<=n;i++) {
            if(!isspcl[i]) gkspcl=i;
        }
        int cnt=adj[gkspcl].size();
        int ans=(binpow(2,cnt)-1+MOD)%MOD;
        if(n>2) {
            ans=ans*binpow(2, n-cnt-1)%MOD;
        }
        cout << ans%MOD << '\n';
        return;
    }
    
    cout << -1 << '\n';
}

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    solve();
}
