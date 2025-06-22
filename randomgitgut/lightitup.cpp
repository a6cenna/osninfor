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

void solve() {
    int n,k;cin>>n>>k;
    int a[k];
    for(int i=0;i<k;i++) cin>>a[i];
    vector<pll> xy(n+1);

    for(int i=1;i<=n;i++) {
        cin>>xy[i].fs>>xy[i].sc;
    }

    ll ans=LLONG_MIN;

    for(int i=1;i<=n;i++) {
        ll dis=LLONG_MAX;
        for(int j=0;j<k;j++) {
            dis=min(dis, ((xy[a[j]].fs-xy[i].fs)*(xy[a[j]].fs-xy[i].fs)+(xy[a[j]].sc-xy[i].sc)*(xy[a[j]].sc-xy[i].sc)));
        }
        ans=max(ans, dis);
    }

    cout << fixed << setprecision(12) << sqrt((long double)ans);
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
