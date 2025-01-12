#include <bits/stdc++.h>

using namespace std;

const int MOD=1e9+7;

int main() {
    int n,x;cin>>n>>x; 
    int c[n];
    for(int i=0;i<n;i++) {
        cin>>c[i];
    }

    vector<int> dp(x+1, 0);
    dp[0]=1;
    for(int i=0;i<=x;i++) {
        if(dp[i]!=0) {
            for(auto c:c) {
                if(i+c<=x) {
                    dp[i+c]+=dp[i];
                    dp[i+c]=dp[i+c]%MOD;
                }
            }
        }
    }

    cout << dp[x];
}
