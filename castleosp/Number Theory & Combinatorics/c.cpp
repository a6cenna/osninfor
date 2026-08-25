// war without reason

#include <bits/stdc++.h>
using namespace std;

#define war_without_reason ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back
#define int ll

vector<bool> prima(1e6+5,1);
vector<int> nilai_prima;
vector<vector<int>> faktorisasi(1e5+5);

void solve() {
    for(int i=2;i<=1e5;i++) {
        cout << i << ": ";
        for(auto x:faktorisasi[i]) {
            cout << x << ' ';
        }
        cout << '\n';
    }
}

signed main() {
    war_without_reason
    prima[1]=0;
    for(int i=2;i<=1e5;i++) {
        if(!prima[i]) continue;
        nilai_prima.pb(i);
        faktorisasi[i].pb(i);
        for(int j=2;j*i<=1e5;j++) {
            prima[i*j]=0;
            faktorisasi[i*j].pb(i);
        }
    }

    solve();
}
