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
    int n,c;cin>>n>>c;
    vector<int> tp;
    for(int i=1;i<=n;i++) {
        int a;cin>>a;
        tp.pb(a+i);
    }
    sort(tp.begin(), tp.end());
    int ans=0;
    for(int i=0;i<n;i++) {
        if(c-tp[i]<0) break;
        ans++;
        c-=tp[i];
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
