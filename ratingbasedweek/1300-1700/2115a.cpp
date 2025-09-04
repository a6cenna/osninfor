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

const int N=5005+5;

int fpb[N][N];

void pre() {
    for(int i=0;i<N;i++) fpb[i][0]=fpb[0][i]=fpb[i][i]=i;
    for(int i=1;i<N;i++) for(int j=1;j<N;j++) fpb[i][j]=fpb[j][i]=fpb[j][i%j];
}

void solve() {
    int n;cin>>n;
    int a[n];
    for(int &x:a)cin>>x;
    int g=0;
    int cntg=0;
    for(int i=0;i<n;i++) {
        g=fpb[g][a[i]];
    }
    for(int i=0;i<n;i++) if(a[i]==g) cntg++;
    if(cntg!=0) {
        cout << n-cntg << '\n';
        return;
    } 
    vector<int> dp(N, N);
    for(int i=0;i<n;i++) dp[a[i]]=0;
    for(int i=5000;i>0;i--) {
        if(dp[i]<N) {
            for(int j=0;j<n;j++) {
                dp[fpb[i][a[j]]]=min(dp[fpb[i][a[j]]], dp[i]+1);
            }
        }
    }
    cout << n-1+dp[g] << '\n';
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
