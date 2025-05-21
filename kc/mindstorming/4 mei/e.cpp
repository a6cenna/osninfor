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
    int n,x;cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a, a+n, greater<int>());
    int ans=0;
    int curr=0;
    for(int i=0;i<n;i++) {
        curr++;
        if(curr*a[i]>=x) {
            ans++;
            curr=0;
        }
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
