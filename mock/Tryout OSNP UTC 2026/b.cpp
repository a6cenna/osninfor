#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pii pair<int,int>
#define pb push_back
#define fs first
#define sc second

void solve() {
    int n,m,k;cin>>n>>m>>k;
    vector<int> baris(n+1,0), kolom(m+1,0);

    while(k--) {
        char o;cin>>o;
        int v;cin>>v;
        if(o=='R') baris[v]++;
        else kolom[v]++;
    }
    int ans=0;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            ans+=((baris[i]+kolom[j])%2);
        }
    }

    cout << ans << '\n';
}

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    solve();
}

/*
6 5 8
R 2
C 4
R 5
C 1
R 2
C 4
R 6
C 3
*/
