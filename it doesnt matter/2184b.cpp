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
    int s,k,m;cin>>s>>k>>m;
    int x=m%k;
    int y=max(0,s-x);
    if(s<=k) cout << y << '\n';
    else {
        if((m/k)%2==1) cout << k-x << '\n';
        else cout << s-x << '\n';
    }
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
