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

void solve() {
    int v,h,n;cin>>v>>h>>n;

    // (vertikal, horizontal)
    bool a[++v][h];
    memset(a, 0, sizeof(a));
    
    while(n--) {
        int y1,x1,y2,x2;cin>>y1>>x1>>y2>>x2;
        for(int i=y1;i<=y2;i++) {
            for(int j=x1-1;j<x2;j++){
                a[i][j]=1;
            }
        }
    }

    ll dp[v][h];

    for(int i=0;i<h;i++) dp[v-1][i]=0; // base case paling bawah
    for(int i=v-2;i>=0;i--) { // transisi
        for(int j=0;j<h;j++) {
            if(a[i][j]) continue; // kalau ketemu batu lanjut ke kanan
            if(!a[i+1][j]) dp[i][j]=dp[i+1][j]; // kalau gaada batu lanjut
            else {
                int l=j;
                int r=j;
                while(a[i+1][l] && l>=0) l--;
                while(a[i+1][r] && r<h) r++;
                dp[i][j]=1+(l<0?0:dp[i+1][l])+(r==h?0:dp[i+1][r]);
            }
        }
    }

    ll ans=LLONG_MIN;
    for(int i=0;i<h;i++) {
        ans=max(ans, dp[0][i]);
    }

    cout << ans;
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
 