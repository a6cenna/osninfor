#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pii pair<int,int>
#define pb push_back

int N=1e12;

// vector<bool> prima(N+5,1);
// vector<int> nilai_prima;

void solve() {
    int n,m;cin>>n>>m;
    map<int,int> primaN,primaM;
    for(int i=2;i*i<=N;i++) {
        if(i*i>n) break;
        while(n%i==0) {
            n/=i;
            primaN[i]++;
        }
    }
    if(n>1) primaN[n]++;
    for(int i=2;i*i<=N;i++) {
        if(i*i>m) break;
        while(m%i==0) {
            m/=i;
            primaM[i]++;
        }
    }
    if(m>1) primaM[m]++;
    bool ok=1;
    // kalau ada di tapi gak ada di y gak akan bisa
    for(auto [x,y]:primaN) {
        if(!primaM.count(x)) {
            ok=0;
            break;
        }
        if(y>primaM[x]) {
            ok=0;
            break;
        }
    }

    if(!ok) {
        cout << -1 << '\n';
        return;
    }

    int ans=LLONG_MIN/2;
    int tmp=0;
    for(auto [x,y]:primaM) {
        // cout << x << " dbg\n";
        tmp=0;
        // kalau di x ga ada gabakal bisa
        if(!primaN.count(x)) {
            cout << -1 << '\n';
            return;
        }
        // kalau yang di x udah lebih gabakal bisa
        if(primaN[x]>y) {
            cout << -1 << '\n';
            return;
        }
        while(primaN[x]<y) {
            int cnt=min(primaN[x], y-primaN[x]);
            primaN[x]+=cnt;
            tmp++;
        }

        ans=max(ans,tmp);
    }

    cout << ans << '\n';
}

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    // prima[1]=0;
    // for(int i=2;i*i<=N;i++) {
    //     for(int j=2;j*i<=N;j++) {
    //         prima[i*j]=0;
    //     }
    // }
    // for(int i=2;i<=N;i++) {
    //     if(prima[i]) nilai_prima.pb(i);
    // }

    solve();
}

/*
1000000000 1000000007
2000000000 2000000000000

288 23887872
23887872 6879707136
*/
