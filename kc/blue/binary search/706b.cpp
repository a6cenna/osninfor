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
    int x[n];
    for(int i=0;i<n;i++) {
        cin>>x[i];
    }
    sort(x, x+n);
    int q;cin>>q;
    int m;
    while(q--) {
        cin>>m;
        // auto it = upper_bound(x, x+n, m);
        // if(it!=x+n) {
        // cout << (lower_bound(x, x+n, m)-x) << '\n';
            cout << (upper_bound(x, x+n, m)-x) << '\n';
        // }
        // else cout << 0 << '\n';
    }
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
