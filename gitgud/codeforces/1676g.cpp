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
    int par[n+1];
    for(int i=2;i<=n;i++)cin>>par[i];
    vector<int> dp(n+1);
    string s;cin>>s;
    for(int i=1;i<=n;i++){
        if(s[i-1]=='B') dp[i]=-1;
        else dp[i]=1;
    }
    for(int i=n;i>=2;i--){
        dp[par[i]]+=dp[i];
    }
    int ans=0;
    for(int i=1;i<=n;i++) {
        ans+=(dp[i]==0);
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
