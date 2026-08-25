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
#define int ll

/*
  RESTATE: ada t tugas yang harus diselesaikan oleh n machine yang setiap mesinnya bisa nyelesaiin satu tugas dalam k detik, bisa barengan
  kita disuruh nyari waktu minimum yang dibutuhkan untuk nyelesaiin semua tugas

  CONSTRAINTS: n banyaknya mesin (1<=n<=2e5), t banyaknya tugas (1<=t<=1e9), ki berapa detik yg dibutuhin mesin (1<=ki<=1e9)
  ANSWER TYPE: minimum time
       → verifier gear (binary search)?

  BRUTE FORCE: nyoba waktu satu-satu bisa gak, tpi ga bisa karena 1e9*2e5

  OBSERVATIONS:
  1. mesinnya bisa digunain bersamaan
  2. kalau waktu s udah cukup, harusnya s+x dimana x juga positif bisa cukup (proven) ->bsta

  SOLUTION SHAPE: "solusinya adalah waktu minimal x yang didapat dengan memverifikasi waktu x dengan n machine apakah valid"
  LAST DECISION: pake bsta verif waktu x bisa ga? kalau bisa coba kita cari yang lebih kecil dari x bisa ga, kalau ga cari yang lebih besar
  caranya: bsta waktu x, verifikasi waktu x bisa ga dengan membagi x/k[i], misal jumlahan dari seluruh x/k[i] bisa kita flag ok, berarti kita cari yang lebih kecil

  EDGE CASES: - jujur kurang tau
  PLAN B: gak ada karena gaada subtask
*/

void solve() {
    int n,t;cin>>n>>t;
    int k[n];
    for(int i=0;i<n;i++) cin>>k[i];

    int ans=-1;
    int l=1,r=1e18;
    while(l<=r) {
        int mid=(l+r)/2;
        int tmp=0;
        for(auto x:k) {
            tmp+=mid/x;
            if(tmp>=t) break;
        }
        if(tmp>=t) {
            r=mid-1;
            ans=mid;
        }
        else {
            l=mid+1;
        }
    }

    cout << ans << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    solve();
}
