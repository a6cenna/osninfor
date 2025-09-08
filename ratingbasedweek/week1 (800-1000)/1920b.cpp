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
    int n,k,x;cin>>n>>k>>x;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    vector<int> pre(n+1,0);
    for(int i=1;i<=n;i++) pre[i]=pre[i-1]+a[i-1];
    int ans=INT_MIN;
    for(int i=n-x;i>=n-x-k;i--) {
        ans=max(ans, pre[max(i, 0)]+(pre[i+x]-pre[max(i,0)])*-1);
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
