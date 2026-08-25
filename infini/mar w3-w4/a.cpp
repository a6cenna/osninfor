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
    int n,q;cin>>n>>q;
    string s;cin>>s;
    bool ok=true;
    for(auto c:s) if(c=='B') ok=false;
    while(q--) {
        int a;cin>>a;
        if(ok) {
            cout << a << '\n';
            continue;
        }
        int at=0;
        int ans=0;
        while(a>0) {
            if(s[at]=='A') a--;
            else a/=2;
            at=(at+1)%n;
            ans++;
        }
        cout << ans << '\n';
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
