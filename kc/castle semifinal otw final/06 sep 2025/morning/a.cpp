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

const int S=1800+5;

double toRadian(double a){
	return (a * acos(-1)) / 180;
}

void solve() {
    string sub;cin>>sub;
    int n;cin>>n;
    pii a[n];
    for(int i=0;i<n;i++) cin>>a[i].fs>>a[i].sc;
    int dp[S], mx[S], freq[S];
    memset(dp, -1, sizeof(dp));
    memset(mx, 0, sizeof(mx));
    memset(freq, 0, sizeof(freq));
    for(int i=0;i<n;i++) {
        freq[a[i].sc]++;
        mx[a[i].sc]=max(mx[a[i].sc], a[i].fs);
    }
    dp[0]=0;
    for(int i=1;i<=1800;i++) {
        for(int j=1;j<=freq[i];j++) {
            if(i*j>1800) break;
            for(int k=1800;k>=i;k--) {
                if(dp[k-i]!=-1) dp[k]=max({dp[k], dp[k-i], mx[i]});
            }
        }
    }
    double ans=0;
    for(int i=1;i<=1800;i++) {
        if(dp[i]!=-1) {
            ans=max(ans, abs(2.0*(double)(dp[i]*dp[i])*sin(toRadian((double)i/10))*cos(toRadian((double)i/10))*9.8));
        }
    }
    cout << fixed << setprecision(12) << ans;
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
