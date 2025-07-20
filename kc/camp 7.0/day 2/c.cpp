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
#define int ll

const ll mod=998244353;

ll fastexpo(ll b, ll p) {
    ll res=1;
    while(p) {
        if(p%2==1) {
            res=res*b%mod;
        }
        b=b*b%mod;
        p/=2;
    }
    return res;
}

void solve() {
    int n;cin>>n;
    int x[n];
    map<ll,ll> mpx;
    // ll sumx=1;
    for(int i=0;i<n;i++) cin>>x[i];
    for(int i=0;i<n;i++) {
        int pangkat;cin>>pangkat;
        mpx[x[i]]=pangkat;
        // sumx*=fastexpo(x[i],mpx[x[i]]);
    }
    int m;cin>>m;
    int y[m];
    // ll sumy=1;
    map<ll,ll> mpy;
    for(int i=0;i<m;i++) cin>>y[i];
    for(int i=0;i<m;i++) {
        int pangkat;cin>>pangkat;
        mpy[y[i]]=pangkat;
        // sumy*=fastexpo(y[i],mpy[y[i]]);
    }
    int ans=0;
    for(int i=0;i<n;i++) {
        if(mpx[x[i]]-mpy[x[i]]>0) ans++;
    }
    bool yes=false;
    for(int i=0;i<m;i++) {
        if(mpx[y[i]]-mpy[y[i]]<0) {
            yes=true;
        }
    }
    if(yes) {
        cout << 0;
        return;
    }
    cout << fastexpo(2, ans)%mod;
}

signed main() {
    suffering_leaves_suffering_leaves

    solve();
}
