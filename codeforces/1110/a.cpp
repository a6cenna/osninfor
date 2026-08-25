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
    int n,k;cin>>n>>k;
    string s;cin>>s;
    if(n/2<k) {
        cout << -1 << '\n';
        return;
    }
    int ans=0;
    for(int i=0;i<min(n/2,k);i++) {
        if(s[i]!='R') ans++;
    }
    for(int i=n-k;i<n;i++) {
        if(s[i]!='L') ans++;
    }

    cout << ans << '\n';
}

int main() {
    war_without_reason

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
