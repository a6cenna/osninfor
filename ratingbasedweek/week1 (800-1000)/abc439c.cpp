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
    map<int,int>mp;
    for(int i=sqrt(n);i>=1;i--) {
        for(int j=i-1;j>=1;j--) {
            if(i*i+j*j<=n) mp[i*i+j*j]++;
        }
    }
    vector<int>ans;
    for(pii x:mp) {
        if(x.sc==1) ans.pb(x.fs);
    }
    cout << ans.size() << '\n';
    for(auto x:ans) cout << x << ' ';
}

int main() {
    suffering_leaves_suffering_leaves

    int t=1;
    // cin >> t;

    while(t--) {
        solve();
    }
}
