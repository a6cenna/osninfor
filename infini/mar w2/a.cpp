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
    sort(a,a+n,greater<int>());
    int cur=0;
    int ans=0;
    while(cur+1<=k&&(cur+1)*x<=a[0]) cur++;
    for(int i=0;i<n;i++) {
        while((cur*x>a[i]||cur>k)&&cur-1>=0) cur--;
        a[i]-=cur*x;
        k-=cur;
    }
    sort(a,a+n,greater<int>());
    int r=0;
    while(k>0&&r<n) {
        k--;
        r++;
    }
    for(int i=r;i<n;i++) {
        ans+=a[i];
    }
    cout << ans << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    solve();
}
