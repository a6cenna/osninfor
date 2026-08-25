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
#define int ll

void solve() {
    int n;cin>>n;
    int sum=n*(n+1)/2;
    int cur=1;
    for(int i=0;i<30;i++) {
        if(cur<=n) sum-=2*cur;
        else break;
        cur*=2;
    }
    cout << sum << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    int t=1;
    cin >> t;

    while(t--) {
        solve();
    }
}
