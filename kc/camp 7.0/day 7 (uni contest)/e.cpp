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
    int n,h;cin>>n>>h;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int l=0;
    int r=n;
    int ans=1;
    while(l<=r) {
        int mid=l+(r-l)/2;
        vector<int> temp;
        for(int i=0;i<mid;i++) {
            temp.pb(a[i]);
        }
        sort(temp.begin(), temp.end(), greater<int>());
        int sum=0;
        for(int i=0;i<mid;i+=2) {
            sum+=temp[i];
        }
        if(h-sum>=0) {
            l=mid+1;
            ans=mid;
        }
        else r=mid-1;
    }
    
    cout << ans << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    solve();
}
