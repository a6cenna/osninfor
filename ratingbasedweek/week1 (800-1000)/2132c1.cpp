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

vector<pii> tiga;

void pre() {
    tiga.pb({1, 3});
    int cur=1;
    while(cur<=1e9) {
        cur*=3;
        int idx=tiga.size();
        tiga.pb({cur, idx*tiga.back().fs+cur*3});
    }
}

void solve() {
    int n;cin>>n;
    int ans=0;
    for(int i=tiga.size()-1;i>=0;i--) {
        while(n-tiga[i].fs>=0) {
            n-=tiga[i].fs;
            ans+=tiga[i].sc;
        } 
    }
    cout << ans << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    pre();
    while(t--) {
        solve();
    }
}
