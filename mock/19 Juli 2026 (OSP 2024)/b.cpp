#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back

void solve() {
    int b,c,d;cin>>b>>c>>d;
    if(d>b) {
        cout << 0 << '\n';
        return;
    }
    if(c==d) {
        cout << b-c << '\n';
        return;
    }
    vector<int> fact;
    int cari=c-d;
    for(int i=1;i*i<=cari;i++) {
        if(cari%i==0&&i<=b&&c%i==d) {
            fact.pb(i);
        }
        if(cari/i!=i&&cari/i<=b&&c%(cari/i)==d) fact.pb(cari/i);
    }
    // for(auto f:fact) {
    //     cout << f << " dbg\n";
    // }

    cout << fact.size() << '\n';
}

signed main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);

    solve();
}
