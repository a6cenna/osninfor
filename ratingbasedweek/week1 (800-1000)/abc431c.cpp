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
    int n,k,x;cin>>n>>k>>x;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    int tmp=0;
    int ans=0;
    for(int i=k-1;i>=0;i--) {
        if(tmp>=x) break;
        tmp+=a[i];
        ans++;
    }
    cout << (tmp<x?-1:ans+n-k) << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    solve();
}
