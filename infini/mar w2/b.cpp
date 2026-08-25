// in the pool

#include <bits/stdc++.h>
using namespace std;

#define suffering_leaves_suffering_leaves ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pll pair<ll, ll>
#define int ll
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back

const int N=1e9+5;

void solve() {
    int n;cin>>n;
    vector<pii> v;
    v.pb({1,3});
    int cur=1;
    int cnt=1;
    while(cur<=N) {
        cur*=3;
        v.pb({cur, cur*3+cnt*v.back().fs});
        cnt++;
    }
    int ans=0;
    for(int i=v.size()-1;i>=0;i--) {
        while(n-v[i].fs>=0){
            n-=v[i].fs;
            ans+=v[i].sc;
        }
    }
    cout << ans << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
