// war without reason

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

void solve() {
    int n,d;cin>>n>>d;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    vector<int> pref(n+1,0);
    vector<int> suff(n+2,0);
    for(int i=1;i<=n;i++) {
        pref[i]=pref[i-1]+a[i-1];
    }
    for(int i=n;i>=1;i--) {
        suff[i]=suff[i+1]+a[i-1];
    }

    int ans=0;
    for(int i=1;i<=n;i++) {
        int up=i+d,down=i-d;
        int sum=2*d*a[i-1];
        int tmp=0;
        if(up>n) {
            tmp+=pref[up%n];
            tmp+=pref[n]-pref[i];
        }
        else tmp+=pref[up]-pref[i];
        if(down<1) {
            tmp+=suff[n+down];
            tmp+=suff[1]-suff[i];
        }
        else tmp+=suff[down]-suff[i];
        ans+=max(sum-tmp,0LL);
    }

    cout << ans << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
