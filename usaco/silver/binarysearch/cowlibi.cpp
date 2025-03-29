// author: sofwant || a6cenna
// created at 28/03/2025
// suffering leaves suffering leaves.

#include <bits/stdc++.h>
using namespace std;

#define suffering_leaves_suffering_leaves ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back

ll pangkat2(ll x) {return x*x;}

bool reachable(pair<ll, pll> &x, pair<ll, pll> &y) {
    return pangkat2(x.fs-y.fs) >= pangkat2(x.sc.fs-y.sc.fs)+pangkat2(x.sc.sc-y.sc.sc);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // freopen("filename.in", "r", stdin);
    // freopen("filename.out", "w", stdout);
    int g,n;cin>>g>>n;

    vector<pair<ll, pll>> garden(g);
    vector<pair<ll, pll>> alibi(n);
    for(int i=0;i<g;i++) cin>>garden[i].sc.fs>>garden[i].sc.sc>>garden[i].fs;
    for(int i=0;i<n;i++) cin>>alibi[i].sc.fs>>alibi[i].sc.sc>>alibi[i].fs;
    sort(garden.begin(), garden.end());
    int ans=0;
    for(auto cow:alibi) {
        auto up=upper_bound(garden.begin(), garden.end(), cow);
        bool yes=false;
        if(up!=garden.end()) yes|=!reachable(*up, cow);
        if(up!=garden.begin()) yes|=!reachable(*(up-1), cow);
        ans+=yes;
    }

    cout << ans << '\n';
}
