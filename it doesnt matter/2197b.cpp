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
    int p[n],a[n];
    for(int i=0;i<n;i++) cin>>p[i];
    for(int i=0;i<n;i++) cin>>a[i];
    int l=0;
    for(int r=0;r<n;r++) {
        if(l<n&&p[r]==a[l]) {
            while(l+1<n&&a[l+1]==a[l]) l++;
            l++;
        }
    }
    cout << (l==n?"YES":"NO") << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
