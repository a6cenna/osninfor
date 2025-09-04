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
    int a[n],b[n];
    for(auto &x:a)cin>>x;
    for(auto &x:b)cin>>x;
    int ans=0;
    int r=0;
    for(int l=0;l<n&&r<n;l++) {
        while(a[l]>b[r]&&r<n) {
            r++;
            ans++;
            
        }
        r++;
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
