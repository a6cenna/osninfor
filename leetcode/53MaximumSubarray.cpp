// war without reason

#include <bits/stdc++.h>
using namespace std;

#define suffering_leaves_suffering_leaves ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back

class Solution {
public:
    #define int long long
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int inf=LLONG_MIN/2;
        vector<vector<int>> dp(n+1, vector<int>(4,inf));
        dp[0][1]=0;
        for(int i=0;i<n;i++) {
            dp[i+1][1]=dp[i][1];
            if(dp[i][1]!=inf) {
                dp[i+1][2]=max(dp[i+1][2], dp[i][1]+nums[i]);
            }
            if(dp[i][2]!=inf) {
                dp[i+1][2]=max(dp[i+1][2], dp[i][2]+nums[i]);
                dp[i+1][3]=max(dp[i+1][3], dp[i][2]);
            }
            if(dp[i][3]!=inf) {
                dp[i+1][3]=max(dp[i+1][3], dp[i][3]);
            }
        }
        int ans=inf;
        for(int i=0;i<n;i++) {
            ans=max(ans, dp[i+1][2]);
        }

        return ans;
    }
};

int main() {
    suffering_leaves_suffering_leaves

    Solution();
}
