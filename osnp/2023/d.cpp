// author: sofwant || a6cenna

#include <bits/stdc++.h>
using namespace std;

#define suffering_leaves_suffering_leaves ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define int ll
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back

void solve() {
    int n,k,x;cin>>n>>k>>x;
    int a[n];
    int b[n];
    for(auto &y:a)cin>>y;
    for(auto &y:b)cin>>y;
    
    int ans=0;
    int l=0;
    int temp=0;
    for(int r=0;r<n;r++) {
        temp+=b[r];
        while(l<=r&& abs(a[r]-a[l])+min(abs(a[r]-x), abs(a[l]-x))>k) {
            temp-=b[l];
            l++;
        }
        ans=max(ans, temp);
    }

    cout << ans << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    solve();
}
