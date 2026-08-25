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

void solve() {
    int n;cin>>n;
    vector<int> faktor;
    for(int i=1;i*i<=n;i++) {
        if(n%i==0) {
            faktor.pb(i);
            if(n/i!=i) faktor.pb(n/i);
        }
    }
    sort(faktor.begin(), faktor.end());

    for(int i=0;i<faktor.size();i++) {
        if((ll)sqrt(n*faktor[i])*sqrt(n*faktor[i])==n*faktor[i]) {
            cout << faktor[i] << '\n';
            return;
        }
    }
}

signed main() {
    war_without_reason

    solve();
}
