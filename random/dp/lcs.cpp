#include <bits/stdc++.h>

using namespace std;

int longestCommonSubsequence(string text1, string text2) {
        int m=text1.length();
        int n=text2.length();
        vector<vector<int>> dp(m, vector<int>(n, 0));
        for (int i = 0; i < m; i++)
        {
            if(text1[i]==text2[0]) dp[i][0]=1;
            else if(i!=0){
                dp[i][0]=dp[i-1][0];
            }
        }
        for (int i = 0; i < n; i++)
        {
            if(text1[0]==text2[i]) dp[0][i]=1;
            else if(i!=0){
                dp[0][i]=dp[0][i-1];
            }
        }
        for(int i=1;i<m;i++) {
            for(int j=1;j<n;j++) {
                if(text1[i]==text2[j]) {
                    if(j-1>=0&&i-1>=0) {
                        dp[i][j]=dp[i-1][j-1]+1;
                    }
                    else {
                        dp[i][j]=1;
                    }
                }
                else {
                    dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }

        return dp[m-1][n-1];
}

int main() {
    string s,s1;cin>>s>>s1;
    cout << longestCommonSubsequence(s,s1);
}
