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
#define int ll

void solve() {
    int n;cin>>n;
    pii a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i].fs;
        a[i].sc=i+1;
    }
    sort(a,a+n);
    int cnt=0;
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(a[i].fs*a[j].fs>2*n) break;
            if(a[i].fs*a[j].fs==a[i].sc+a[j].sc) cnt++;
        }
    }
    cout << cnt << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
