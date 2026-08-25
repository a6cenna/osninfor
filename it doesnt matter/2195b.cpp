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

void solve() {
    int n;cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n/2;i++) {
        if(a[i]>a[i*2]) swap(a[i],a[i*2]);
    }
    for(int i=2;i<=n;i++) {
        if(a[i-1]>a[i]) {
            cout << "NO" << '\n';
            return;
        }
    }
    cout << "YES" << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
