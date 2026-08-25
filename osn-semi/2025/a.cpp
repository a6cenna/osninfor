// war without reason

#include <bits/stdc++.h>
using namespace std;

#define war_without_reason ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define int ll
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back

void solve() {
    int n,k;cin>>n>>k;
    vector<pii> items; // harga, jumlah
    for(int i=0;i<n;i++) {
        int x;cin>>x;
        int cnt=1;
        while(x%2==0) {
            x/=2;
            cnt*=2;
        }
        items.pb({x,cnt});
    }
    sort(items.begin(), items.end(), greater<pii>());

    int ans=0;
    for(int i=0;i<items.size();i++) {
        if(k==0) break;
        int habis=min(items[i].sc,k);
        k-=habis;
        ans+=(items[i].fs*habis);
    }

    cout << ans << '\n';
}

signed main() {
    war_without_reason

    solve();
}
