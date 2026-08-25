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
    int n,x,y,z;cin>>n>>x>>y>>z;
    int ans=ceil((double)n/(x+y));
    int tmp=z;
    n-=tmp*x;
    if(n<=0) {
        cout << ans << '\n';return;
    }
    tmp+=ceil((double)n/(x+10*y));
    
    cout << min(ans,tmp) << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
