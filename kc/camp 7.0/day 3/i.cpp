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
#define int ll

void solve() {
    int n,k;cin>>n>>k;
    int a[n+k];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<k;i++) {
        a[n+i]=a[i];
    }

    // int r=1;
    // int ans=0;
    // for(int l=0;l<n;l++) {
    //     while(a[r]-a[l]<=1&&r<n) {
    //         r++;
    //     }
    //     ans=max(ans, r-l-1);
    // }
    multiset<int> ms;
    int ans=0;
    n+=k;
    int l=0;
    for(int r=0;r<n;r++) {
        while(!ms.empty()&&ms.count(a[r])) {
            ms.erase(a[l]);
            l++;
        }
        ms.insert(a[r]);
        while(*ms.rbegin()-*ms.begin()>=k) {
            ms.erase(a[l]);
            l++;
        }
        ans=max(ans, r-l+1);
    }
    cout << k-ans;
}

signed main() {
    suffering_leaves_suffering_leaves

    solve();
}
