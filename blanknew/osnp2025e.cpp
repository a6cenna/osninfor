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
    restate: ada n bambu panjang masing2 Ai, *seluruh*nya harus dipakai untuk buat bundle yang berisi minimal m bambu
    bisa motong bambu dengan berkurang maks K satuan. disuruh nyari cara ngelompokin biar dapet bundle terbanyak

    constraint: n banyak bambu dan m minimal bambu untuk 1 bundle (2≤M≤N≤2e5), Ai tinggi bambu ke i dan K maks berkurang tinggi (1<=x<=1e9)
    answer type: structure gear kayak pengelompokkan bambu biar bundlenya maksimum dengan batas tdi (dp? two pointer?)

    bruteforce: karna subtask 1 m<=20 bisa bruteforce kayak sliding window dengan panjang m nanti ngecek

    observasi: {
        1. suatu elemen A[i] itu bisa mencakup dari A[i]--(A[i]-k), jadi kita bisa sort, terus cuma peduli elemen akhir dan awal dari segmen, kalau A[akhir]-A[awal]<=k aman berarti
        2. jadi feasible atau gaknya sebenernya tergantung elemen awal (?) karena awal berarti cuma a[0] fix, gabisa dikurangi.
        3. misal kita punya banyak elemen yang sama yang >=m, secara optimal bisa langsung di kelompokkan ke dalam m karena misal pun elemen yang lebih dari m gabisa dibuat bundle, 
        nanti bisa masuk ke m bundle awal tadi sedangkan >=m tadi bisa menyumbang buat bambu berikutnya, apakah kl bisa nyumbang selalu positif? logikanya nanti yg elemen akhir2 setelah itu
        jadi nya bisa aja elemen yg seharusnya buat dia diambil elemen yg sisa tdi -> gimana cara atasinnya? hemm kita bisa kayak bikin kemungkinan misal elemen tadi masuk, atau element tadi ngga
        terus kontribusi ke elemen selanjutnya, masuk atau ngga, subproblem yg kontribusi ke problem selanjutnya -> hampir pasti dp
    }

    solution shape: solusinya nanti adalah cara membagi bambunya ke dalam kelompok agar semua terjual dan bundle sebanyak-banyaknya
    last decision: dp, dimana dp[i] semacam prefix, sampai index ke-i itu bisa buat bundle berapa maksimal kalau bisa (artinya seluruh bambu dari 1-i jadi bundle), kalau gabisa -1, bisa dibuktikan juga misal i<j maka dan dp[i]!=1&&dp[j]!=1 maka dp[j]>=dp[i] karena hanya bisa sama misal elemen ke j itu ikut ke kelompok i, atau dp[j] lebih besar karena j masuk ke bundle baru
    transisi: pertama, kita untuk transisinya, berarti karena menyangkut feasible berarti kita butuh l, kenapa karena dp nya semacam i, nah dari i ini index terkiri yang mungkin itu apa? nah itu fungsi l
    jadi, gimana caranyaa kita nentuin l, syarat elemen terkiri: dari a[i]-a[l] itu <=k karena berarti bisa masuk bundle, nah gimana kita cara kita increment si l ini, satu2 terus dicek? tpi ada satu syarat lagi, bisa dikelompokin kalau elemen ke l-1 sampai awal itu bisa bentuk bundle, kenapa?
    karena kalau dari 1 sampai (l-1) gabisa bentuk bundle gak guna kita bentuk bundle dari a[i] sampai a[l] karena l-1 aja gabisa -> dari sini bisa diambil ide kalau kita butuh syarat dp[l-1]!=-1, sekarang kita bisa greedy, tadi kita udh dapet observasi kalau i<j dan dua2nya valid untuk dp[i] dan dp[j], maka dp[j]>=dp[i], dan j yang paling mungkin adalah untuk sebuah index kanan i yakni dp[i-m]

    edge case/overflow: karena hitung banyak bundle maksimal yang dimana maks banyak bundle itu 1e5/1, jadi gak overflow.
*/

void solve() {
    int n,m,k;cin>>n>>m>>k;
    int a[n+1];
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    vector<int> dp(n+1,-1);
    dp[0]=0;
    int l=0;
    for(int r=1;r<=n;r++) {
        if(r-m>=0&&dp[r-m]!=-1) l=r-m;
        if(r-l>=m&&a[r]-a[l+1]<=k) dp[r]=dp[l]+1;
    }

    cout << dp[n] << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
