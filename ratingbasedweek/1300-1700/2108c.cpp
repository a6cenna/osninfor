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
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    vector<int> comp;
    comp.pb(-1e9);
    for(int i=0;i<n;i++) {
        while(i+1<n&&a[i]==a[i+1]) {
            i++;
        }
        comp.pb(a[i]);
    }
    comp.pb(-1e9);
    int ans=0;
    for(int i=1;i<comp.size()-1;i++) {
        if(comp[i]>comp[i-1]&&comp[i]>comp[i+1]) ans++;
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
