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
    int l,r,L,R;cin>>l>>r>>L>>R;
    if(max(l,L)<=min(r,R)) {
        int ans=min(r,R)-max(l,L);
        if(min(r,R)!=max(r,R)) ans++;
        if(min(l,L)!=max(l,L)) ans++;

        cout << ans;
    }
    else cout << 1;
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
