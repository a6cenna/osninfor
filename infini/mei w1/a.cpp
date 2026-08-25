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
    int n;cin>>n;
    vector<int> s;
    s.pb(1);
    for(int i=2;i<=n;i++) {
        vector<int> tmp;
        tmp.insert(tmp.end(), s.begin(), s.end());
        tmp.pb(i);
        tmp.insert(tmp.end(), s.begin(), s.end());
        s=tmp;
    }

    for(auto x:s) {
        cout << x << ' ';
    }
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
