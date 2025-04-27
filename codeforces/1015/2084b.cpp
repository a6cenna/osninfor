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
    ll a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    ll temp_gcd=0;
    ll x=a[0];
    for(int i=1;i<n;i++) {
        if(a[i]%x==0) {
            temp_gcd=__gcd(temp_gcd, a[i]);
        }
    }
    if(temp_gcd==x) {
        cout << "YES\n";
    }
    else cout << "NO\n";
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
