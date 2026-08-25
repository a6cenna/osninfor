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
  RESTATE: ada n bahan yang dibutuhin dengan masing2 butuh ai gram. sedangkan kita punya bi gram tiap bahan
  tapi ada tambahan magic powder yg bisa digunain buat nambah serah bahan apa 1 gram. suruh nyari berapa banyak kue max yg bisa dibaut


  CONSTRAINTS: n banyak bahan (1<=n<=1e5), k magic powder (1<=k<=1e9), ai banyak bahan ke i (1<=ai<=1e9), bi banyak bahan yg kita punya ke i (1<=bi<=1e9)
  ANSWER TYPE: maximum kue yg bisa dibuat denghan bahan itu

  BRUTE FORCE: coba kita kurangi bahannya pake for loop sampe gabisa, kalau gabisa tambal pake magic powder, kalau dah gabisa, itu maksnya.

  OBSERVATIONS:
  1. kalau buat kue sebanyak x bisa, maka buat kue kurang dari x juga bisa (proven)
  2. magic powder bisa buat nambali kayak yg di brute force bedanya bisa dioptimize dulu, dan gak duli bahan apa, pokoknya yang kurang bisa kita tambal pake magic powder dan itu optimal

  SOLUTION SHAPE: "solusinya ada x yaitu banyak kue maksimal yang bisa dibuat"
  LAST DECISION: kita bisa bsta value x nya terus dicek memenuhi atau ngga, kalau memenuhi kita coba kalau lebih dari x bisa ga
  kalau ternyata dicek ga memenuhi berarti kita coba kurangi x nya

  EDGE CASES: l nya dari 0 karena berarti gabisa, r nya berarti 2e9 karena (1e9+1e9)/1. terus untuk potensi overflow, misal ada 1e5 bahan dan setiap b[i]=1 sedang butuhnya 1e9, 1e5*1e9*mid(max 1e9)=1e5*1e18
  PLAN B: coba cara bruteforce
*/

void solve() {
    int n,k;cin>>n>>k;
    int a[n],b[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    int ans=0;
    int l=0,r=2e9;
    while(l<=r) {
        int mid=(l+r)/2;
        int need=0;
        for(int i=0;i<n;i++) {
            need+=min(0LL,b[i]-mid*a[i]);
            if(need+k<0) break;
        }
        if(need+k>=0) {
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
