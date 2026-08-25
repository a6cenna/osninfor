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
    int c[n];
    for(int i=0;i<n;i++) {
        cin>>c[i];
    }
    int ans=0;
    int bonus=0;
    int cnt=0;
    for(int i=0;i<n;i++) {
        if(c[i]>1) {
            ans+=c[i];
            cnt++;
            bonus+=(c[i]/2)-1;
        }
    }
    if(cnt==1)bonus++;
    ans+=min(bonus, n-cnt);
    
    cout << (ans>=3?ans:0) << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
