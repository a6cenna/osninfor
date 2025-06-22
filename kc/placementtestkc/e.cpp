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
    int n,k,q;cin>>n>>k>>q;
    vector<ll> a(k+1);
    vector<ll> b(k+1);
    a[0]=0;
    b[0]=0;
    for(int i=1;i<=k;i++) cin>>a[i];
    for(int i=1;i<=k;i++) cin>>b[i];
    while(q--) {
        ll d;cin>>d;
        int close = (lower_bound(a.begin(),a.end(), d)-a.begin());

        if(a[close]==d) cout << b[close];
        else {
            ll s=d-a[close-1];
            ll v=(a[close]-a[close-1])/(b[close]-b[close-1]);

            cout << b[close-1]+(d-a[close-1])*(b[close]-b[close-1])/(a[close]-a[close-1]); 
        }

        cout << ' ';
    }

    cout << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
