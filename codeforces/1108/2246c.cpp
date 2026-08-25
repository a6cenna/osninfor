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
#define int ll

const int mod=1e9+7;

int fastpow(int x, int y) {
    int res=1;
    while(y) {
        if(y%2) res=(res*x)%mod;
        x=(x*x)%mod;
        y/=2;
    }

    return res;
}

void solve() {
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int cnt=0, byone=0;
    map<int,int> mp;
    for(int i=0;i<n;i++) {
        if(i-1>=0&&a[i]-a[i-1]==1) byone++;
        if(a[i]!=-1) mp[a[i]]++;
        else cnt++;
    }
    int pilih=0;
    for(auto [x,y]:mp) {
        pilih+=y-1;
    }
    int ans=fastpow(2,pilih);
    if(cnt!=0) ans=(ans*(byone+1)%mod)*fastpow(2,cnt-1)%mod;

    cout << ans << '\n';
}

signed main() {
    war_without_reason

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
