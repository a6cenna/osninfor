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
    cout << n << ' ';
    for(int i=1;i<=n;i++) {
        cout << i << ' ' << i << ' ';
    }
    for(int i=1;i<=n;i++) {
        cout << i << ' ';
    }
    for(int i=1;i<=n-1;i++) {
        cout << i << ' ';
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
