// author: sofwant || a6cenna

#include <bits/stdc++.h>
using namespace std;

#define suffering_leaves_suffering_leaves ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define int ll
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back

void solve() {
    int n,p,l;cin>>n>>p>>l;
    int ans=1e12;
    for(int i=1;i<=1e6;i++) {
        int cnt = i * floor((p*i)/l);;
        if(cnt>=n) {
            ans=p*i;
            break;
        }
    }
    if(p!=l) {
        for(int i=1;i<=1e6;i++) {
        int cnt = i * floor((l*i)/p);;
        if(cnt>=n) {
            ans=min(ans, l*i);
            break;
        }
    }
    }
    cout << ans << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    solve();
}
