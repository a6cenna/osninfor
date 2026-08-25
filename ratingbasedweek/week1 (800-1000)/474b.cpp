// in the pool

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
    int n;cin>>n;
    int pref[n+1];
    pref[0]=0;
    for(int i=1;i<=n;i++) {
        int x;cin>>x;
        pref[i]=pref[i-1]+x;
    }
    int q;cin>>q;
    while(q--) {
        int x;cin>>x;
        cout << lower_bound(pref, pref+n, x)-pref << '\n';
    }
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
