// author: sofwant || a6cenna
// created at 02/04/2025
// suffering leaves suffering leaves.

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
    int ans=0;
    if(n%2==1) {
        ans++;
        if(k%2==1) n-=k;
        else n-=k-1;
    }
    if(k%2==1) k--;
    ans+=n/k;
    if(n%k!=0)ans++;
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
