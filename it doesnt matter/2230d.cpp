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
    int a[n],b[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    vector<int> posa(n+5, n+1), posb(n+5, n+1), dp(n+5, n);
    ll ans=0;
    for(int i=n;i>=1;i--) {
        posa[a[i-1]]=i;
        posb[b[i-1]]=i;
        if(a[i-1]==b[i-1]) {
            int nxt=a[i-1]+1;
            if(posa[nxt]==posb[nxt]) {
                dp[i]=dp[posa[nxt]];
            }
            else {
                dp[i]=min(posa[nxt], posb[nxt])-1;
            }
        }
        if(posa[1]!=posb[1]) {
            ans+=min(posa[1], posb[1])-i;
        }
        else {
            ans+=dp[posa[1]]-i+1;
        }
    }

    cout << ans << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
