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
  RESTATE: ada n pohon dengan tinggi masing2 ai. bisa kita tebang dengan ketinggian x, setelah di tebang semua tinggi pohon maximal x, dan dapet kayu max(y-x,0)
  disuruh nyari hasil tebangan yang paling minimum sehingga m terpenuhi
  CONSTRAINTS: n banyak pohon (1<=n<=1e5), m kayu yg dibutuhin (1e12), Ai itu tinggi pohon ke-i (1<=Ai<=1e6)
  ANSWER TYPE: tinggi max yang bisa buat m terpenuhi
       → verifier gear (binary search, ngecek tinggi m bisa ngga)

  BRUTE FORCE: coba x satu2 karena <=1000

  OBSERVATIONS:
  1. sama kayak yg factory, misal tinggi x bisa, tinggi maks kurang dari x pasti juga bisa
  2. kayu yang didapat = max(0, Ai-x)

  SOLUTION SHAPE: "jawabannya adalah sebuah integer x yang menjadi tinggi maksimum untuk menghasilkan hasil tebangan >=m"
  LAST DECISION: pake bsta cek, cek setiap x valid atau gak syaratnya sum>=m, kalau iya cek x yang lebih besar dengan ganti l, kalau gak memenuhi kecilin x

  EDGE CASES: x yang mungkin sesuai Ai (1 sampai 1e6), bisa overflow ngga? 1e5*1e6, 1e11, berarti ll bisa
  PLAN B: what do I submit if this fails? (subtask ladder) X coba x satu2 karena <=1000
*/

void solve() {
    int n,m;cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int ans=-1;
    int l=0,r=1e6;
    while(l<=r) {
        int mid=(l+r)/2;
        int sum=0;
        for(auto x:a) {
            sum+=max(x-mid, 0LL);
        }
        if(sum>=m) {
            ans=mid;
            l=mid+1;
        }
        else r=mid-1;
    }
    cout << ans << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    solve();
}
