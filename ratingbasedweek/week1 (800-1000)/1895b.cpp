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

void solve() {
    int n;cin>>n;
    int a[2*n];
    for(int i=0;i<2*n;i++) cin>>a[i];
    sort(a,a+2*n);
    int ans=0;
    for(int i=0;i<2*n-1;i++) {
        if(i!=n-1)ans+=abs(a[i]-a[i+1]);
    }
    cout << ans << '\n';
    for(int i=0;i<n;i++) {
        cout << a[i] << ' ' << a[i+n] << '\n';
    } 
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
