#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pii pair<int,int>
#define pb push_back
#define fs first
#define sc second

void solve() {
    int s,t,k,q;cin>>s>>t>>k>>q;
    if(s>t) swap(s,t);
    int selisih=t-s;
    int kiri=selisih/k;
    int kanan=ceil((double long)selisih/k);

    if(q==1) cout << min(kiri+(selisih-kiri*k), kanan+(kanan*k-selisih)) << '\n';
    else cout << max({kiri+(selisih-kiri*k), kanan+(kanan*k-selisih), (s==t?2:0LL), (selisih%k==0?kiri+2:0LL)}) << '\n';
}

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    solve();
}

/*
    kalau selisihnya habis dibagi k:
    maju 1 + maju k kiri kali + mundur 1, kiri+2
*/
