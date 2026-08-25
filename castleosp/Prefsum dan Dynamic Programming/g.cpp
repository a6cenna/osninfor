// war without reason

#include <bits/stdc++.h>
using namespace std;

#define war_without_reason ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back
#define int ll

void solve() {
    int n;cin>>n;
    vector<int> a;
    set<int> ada;
    bool ok=0;
    for(int i=0;i<n;i++) {
        int x;cin>>x;
        if(x==1) ok=1;
        if(!ada.count(x)) {
            a.pb(x);
            ada.insert(x);
        }
    }
    vector<int> dp(n+1, -1);
    dp[1]=0;
    for(int i=0;i<a.size();i++) {
        for(int j=a[i];j<=n;j+=a[i]) {
            if(j%a[i]!=0) continue;
            if(j/a[i]==0) break;
            if(dp[j/a[i]]==-1) continue;
            if(dp[j]!=-1) dp[j]=min(dp[j], dp[j/a[i]]+1);
            else dp[j]=dp[j/a[i]]+1;
        }
    }

    if(ok) cout << 1 << ' ';
    else cout << -1 << ' ';
    for(int i=2;i<=n;i++) {
        cout << dp[i] << ' '; 
    }

    cout << '\n';
}

signed main() {
    war_without_reason

    int t;cin>>t;
    while(t--) solve();
}
