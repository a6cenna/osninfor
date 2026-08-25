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

void solve() {
    int n;cin>>n;
    if(n==1) cout << 1 << '\n';
    else {
        cout << "2 1 ";
        for(int i=4;i<=n;i+=2) cout << i << ' ' << i-1 << ' ';
        cout << '\n';
    }
}

int main() {
    war_without_reason

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
