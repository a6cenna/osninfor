#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;cin>>n;
    
    vector<int>dp(n+1, INT_MIN);
    
    dp[0]=0;
    for(int i=1;i<=n;i++) {
        dp[i]=max(i, dp[i/2] + dp[i/3] + dp[i/4]);
    }
    
    cout << dp[n];
}
