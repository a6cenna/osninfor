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
    int n;cin>>n;
    vector<int> pref(n+1,0);
    int a;
    for(int i=1;i<=n;i++) {
        cin>>a;
        pref[i]=pref[i-1]+a;
    }
    int m;cin>>m;
    int q;
    while(m--) {
        cin>>q;
        cout << lower_bound(pref.begin(), pref.end(), q)-pref.begin() << '\n';
    }
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
