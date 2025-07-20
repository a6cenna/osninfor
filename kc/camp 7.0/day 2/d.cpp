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

const int mod=998244353;

void solve() {
    int n;cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++) cin>>a[i];
    int ans=0;
    for(int i=1;i<=n;i++) {
        for(int j=i+i;j<=n;j+=i) {
            a[i]=max(a[i],a[j]);
        }
    }
    sort(a+1,a+n+1);
    int cnt=1;
    for(int i=1;i<=n;i++) {
        ans=(ans+cnt*a[i])%mod;
        cnt=(cnt+cnt)%mod;
    }
    
    cout << ans;
}

signed main() {
    suffering_leaves_suffering_leaves

    solve();
}
