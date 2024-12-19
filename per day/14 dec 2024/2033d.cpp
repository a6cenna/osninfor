#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    int a[n+1];
    for (int i = 1; i < n+1; i++)
    {
        cin>>a[i];
    }
    map<long long,int> mep;
    long long prefixsum[n+1];
    prefixsum[0]=0;
    int last[n+1];
    mep[0]=0;

    bool isThere=false;

    for(int i = 1; i <= n; i++){
        prefixsum[i] = prefixsum[i-1] + a[i];
        if(mep.find(prefixsum[i]) == mep.end()){
            last[i] = -1;
        } else {
            last[i] = mep[prefixsum[i]];
            isThere=true;
        }
        mep[prefixsum[i]] = i;
    }

    if(!isThere) {
        cout << 0 << '\n';
        return;
    }
    int dp[n+1];
    int ans=INT_MIN;
    memset(dp, 0, sizeof dp);
    for(int i = 1; i <= n; i++){
        dp[i] = max(dp[i], dp[i-1]);
        if(last[i] != -1){
            dp[i] = max(dp[i], dp[last[i]] + 1);
        }
        ans = max(ans, dp[i]);
    }
    
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
