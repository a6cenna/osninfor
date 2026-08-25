// war without reason

#include <bits/stdc++.h>
using namespace std;

#define war_without_reason ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back
#define int ll

void solve() {
    int n;cin>>n;
    if(n==1) cout << 1 << '\n';
    else if(n==2) cout << -1 << '\n';
    else {
        cout << "1 2 3 ";
        int cur=3;
        for(int i=4;i<=n;i++) {
            cout << cur*2 << ' ';
            cur*=2;
        }
        cout << '\n';
    }
}

signed main() {
    war_without_reason

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
