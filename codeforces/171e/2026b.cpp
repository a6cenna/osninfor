// author: sofwant || a6cenna
// created at 03/04/2025
// suffering leaves suffering leaves.

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
    vector<ll> a(n);
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    ll ans=LLONG_MAX;
    int x[]={-1,1};
    if(n%2==0) {
        ans=0;
        for(int i=0;i<n;i+=2) ans=max(ans, a[i+1]-a[i]);
    }
    else {
        for(int i=0;i<n;i++){
            for(auto xi:x){
                a.pb(a[i]+xi);
                vector<ll>b=a;
                sort(b.begin(), b.end());
                for(int i=0;i<n;i++) if(b[i]==b[i+1]) continue;
                ll temp=LLONG_MIN;
                for(int i=0;i<n+1;i+=2) temp=max(temp, b[i+1]-b[i]);
                ans=min(ans, temp);
                a.pop_back();
            }
        }
    }

    cout << ans << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
