// in the pool

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
    int n;cin>>n;
    int a[n];
    bool isev=0,isod=0;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        if(a[i]%2==0) isev=1;
        else isod=1;
    }
    sort(a,a+n);
    if(!isev||!isod) {
        cout << a[n-1] << '\n';
        return;
    } 
    int ans=0;
    for(int i=n-1;i>=0;i--) {
        // cout << ans << " deb\n";
        if(a[i]%2==1) ans+=(a[i]-1);
        else ans+=a[i];
    }
    cout << ans+1 << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
