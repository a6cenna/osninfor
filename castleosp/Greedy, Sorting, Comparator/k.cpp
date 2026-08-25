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

void solve() {
    int n,h,k;cin>>n>>h>>k;
    int sum=0;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
        sum+=a[i];
    }
    int ans=(h/sum)*n;
    if(h%sum==0) ans+=((h/sum)-1)*(k);
    else ans+=(h/sum)*(k);
    h-=(h/sum)*sum;

    if(h==0) {
        cout << ans << '\n';
        return;
    }

    vector<int> suffmx(n+2, 0), prefmn(n+1, INT_MAX), pref(n+1,0);
    for(int i=n;i>=1;i--) {
        suffmx[i]=max(suffmx[i+1], a[i-1]);
    }
    for(int i=1;i<=n;i++) {
        prefmn[i]=min(prefmn[i-1], a[i-1]);
        pref[i]=pref[i-1]+a[i-1];
    }
    for(int i=1;i<=n;i++) {
        if(pref[i]>=h||pref[i]-prefmn[i]+suffmx[i+1]>=h) {
            ans+=i;
            break;
        }
    }

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
