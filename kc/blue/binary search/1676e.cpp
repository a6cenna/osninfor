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
    int n,q;cin>>n>>q;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n, greater<int>());
    vector<int> pref(n+1,0);
    for(int i=1;i<=n;i++) {
        pref[i]=pref[i-1]+a[i-1];
    }
    int x;
    while(q--){
        cin>>x;
        auto it=lower_bound(pref.begin(), pref.end(), x);
        if(it==pref.end()){
            cout << -1 << '\n';
            continue;
        }
        cout << it-pref.begin() << '\n';
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
