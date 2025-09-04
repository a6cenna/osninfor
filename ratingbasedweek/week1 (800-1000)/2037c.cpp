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
    if(n<=4) {
        cout << -1 << '\n';return;
    }
    for(int i=1;i<=n;i+=2) {
        if(i!=5) cout << i << ' ';
    }
    cout << 5 << ' ';
    cout << 4 << ' ';
    for(int i=2;i<=n;i+=2) {
        if(i!=4) cout << i << ' ';
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
