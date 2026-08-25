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
    int n,m;cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int tmp=0;
    for(int i=1;i<n;i++) {
        tmp=gcd(tmp,abs(a[i]-a[0]));
    }
    while(m--) {
        int x;cin>>x;
        cout << gcd(a[0]+x,tmp) << ' ';
    }
    cout << '\n';
}

signed main() {
    war_without_reason

    solve();
}
