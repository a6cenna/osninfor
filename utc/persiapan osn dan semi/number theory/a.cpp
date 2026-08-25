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
        if(n%i==0) faktor.pb(i);
    }
    cout << (faktor[faktor.size()-1]-1+n/faktor[faktor.size()-1]-1) << '\n';
}

int main() {
    war_without_reason

    solve();
}
