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
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    ll ans=0;
    if(k==1) {
        // mirip solusi yg mikir kebanyakan
        for(int i=0;i<n-1;i++) ans=max(ans, 1LL*(a[i]+a[n-1]));
        for(int i=1;i<n;i++) ans=max(ans, 1LL*(a[i]+a[0]));
    }
    else {
        sort(a,a+n, greater<int>());
        for(int i=0;i<k+1;i++) {
            ans+=a[i];
        }
    }
    
    cout << ans << '\n';


    // overcomplicate, your first solution works.

    // int n,k;cin>>n>>k;
    // vector<pii> a;
    // int ori[n];
    // for(int i=0;i<n;i++) {
    //     cin>>ori[i];
    //     a.pb({ori[i], i});
    // }

    // sort(a.begin(), a.end(), greater<pii>());
    // 2 case 
    // first we pick k largest element then we check the largest in between and on the edge
    // we find the largest
    // and two we dont actually find the largest, what if there is same element
    // lets ignore and do the first.
    // int l=INT_MAX,r=INT_MIN;
    // ll ans=0;
    // set<int> used;
    // for(int i=0;i<k;i++) {
    //     ans+=a[i].fs;
    //     l=min(l, a[i].sc);
    //     r=max(r, a[i].sc);
    //     used.insert(a[i].sc);
    // }
    // int maxinbetween;
    // if(r==n-1&&l==0) maxinbetween=INT_MIN;
    // else if(r==n-1) maxinbetween=ori[0];
    // else if(l==0) maxinbetween=ori[n-1];
    // else maxinbetween=max(ori[0], ori[n-1]);
    // for(int i=l+1;i<r;i++) {
    //     if(used.count(i)) continue;
    //     maxinbetween=max(maxinbetween, ori[i]);
    // }
    // ans+=(maxinbetween==INT_MIN? 0:maxinbetween);
    // cout << ans << '\n';
    // cout << "dbg " << l << ' ' << r << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
