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

const int N=1e5+5;

void solve() {
    int n;cin>>n;
    int t[n];
    int sum=0;
    for(int i=0;i<n;i++) {
        cin>>t[i];
        sum+=t[i];
    }
    int dp[N];
    memset(dp,-1,sizeof(dp));
    dp[0]=0;
    for(int i=0;i<n;i++) {
        for(int j=sum;j>=t[i];j--) {
            if(dp[j-t[i]]!=-1) dp[j]=dp[j-t[i]]+1;
        }
    }
    int ans=sum;
    for(int i=1;i<=N;i++) {
        if(dp[i]!=-1) {
            ans=min(ans,max(i,sum-i));
        }
    }
    cout << ans << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
