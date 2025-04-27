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
    ll x,y,a;cin>>x>>y>>a;
    if(x>a) cout << "NO\n";
    else if(x+y>a) cout << "YES\n";
    else {
        a-=(a/(x+y))*(x+y);
        if(x>a) cout << "NO\n";
        else if(x+y>a) cout << "YES\n";
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
