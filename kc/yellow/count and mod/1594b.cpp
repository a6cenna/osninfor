// author: sofwant || a6cenna

#include <bits/stdc++.h>
using namespace std;

#define suffering_leaves_suffering_leaves ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back

const ll MOD=1e9+7;

void solve() {
    ll n,k;cin>>n>>k;
    ll ans=0;
    ll pangkat=1;
    while(k>0){
        if(k%2==1) ans=(ans+pangkat)%MOD;
        pangkat=pangkat*n%MOD;
        k/=2;
    }
    cout << ans << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
