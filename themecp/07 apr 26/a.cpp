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
    int a,b;cin>>a>>b;
    if(a%2==1&&b%2==1) {
        cout << "NO" << '\n';
        return;
    }
    if(a%2==0&a/2==b&&b%2==1) {
        cout << "NO" << '\n';
        return;
    }
    if(b%2==0&b/2==a&a%2==1) {
        cout << "NO" << '\n';
        return;
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
