// author: sofwant || a6cenna

#include <bits/stdc++.h>
using namespace std;

#define suffering_leaves_suffering_leaves ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back

const int N = 5000;

void solve() {
    int n;cin>>n;
    vector<int> dp(N+1, INT_MAX);
    vector<int> freq(N+1, 0);
    int mx=INT_MIN;
    for(int i=0;i<n;i++) {
        int x;cin>>x;
        if (x<N) freq[x]++;
        mx=max(mx, x);
    }
    int m;
    for(int i=0;i<=mx+1;i++) {
        if(freq[i]==0) {
            m=i;
            break;
        }
    }
    dp[m]=0;
    for(int i=m;i>=0;i--) {
        for(int j=0;j<i;j++) {
            dp[j] = min(dp[j], dp[i]+(freq[j]-1)*i+j);
        }
    }

    cout << dp[0] << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
