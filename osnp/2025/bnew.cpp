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

/*
    yang pertama kali kepikiran: 
    1. cara verif kalau bisa
    2. cara ngelompokinnya biar maks

    observasi: 
    1. misal ada bambu i dengan tinggi Ai, berarti dia bisa jadi Ai sampai (Ai-k).

    ide:
    1. cara verif: liat apakah ada jumlah potongan bambu yang ga punya irisan dengan observasi (1), misal lebih dari M, lolos. kemudian misal irisan, yang lebih banyak harus (perlu pembuktian) ikutin yang bawahnya kalau mau masuk ke dalam satu ikatan.
    2. sort dulu, karena harus ikutin dari nilai paling kecil, misal bisa bentuk bundle satu aja, fix bisa karena harus lebih dari M (minimal)
*/

void solve() {
    int n,m,k;cin>>n>>m>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    vector<int> dp(n+1, -1);
    sort(a,a+n);
    dp[0]=0;
    int l=0;
    for(int i=1;i<=n;i++) {
        if(i-m>=0&&dp[i-m]!=-1) l=i-m;
        if(l<=i-m&&a[i-1]-a[l]<=k) dp[i]=dp[l]+1;
    }
    
    cout << dp[n] << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
