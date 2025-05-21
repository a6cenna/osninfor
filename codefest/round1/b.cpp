#include <bits/stdc++.h>
using namespace std;

#define suffering_leaves_suffering_leaves ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back

const int N=1e6;

vector<int> dp(N+1, INT_MAX);

void pre() {
    dp[0]=0;
    for(int i=1;i<=N;i++) {
        dp[i]=min(dp[i], dp[i-1]+1);
        if(i>1) {
            for(int j=2;j<=min(i, N/i);j++) {
                dp[i*j]=min(dp[i*j], dp[i]+1);
            }
        }
    }
}

void solve() {
    int n;cin>>n;
    cout << dp[n] << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    pre();

    while(t--) {
        solve();
    }
}
