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
    ll n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int l=0,r=n-1;
    while(k>0 && l<=r) {
        int x=min(a[l],a[r]);
        if(k>=2*x) {
            a[l]-=x;
            a[r]-=x;
            k-=x*2;
        }
        else {
            a[l]-=(k+1)/2;
            a[r]-=k/2;
            k=0;
        }
        if(a[l]<=0) l++;
        if(a[r]<=0) r--;
    } 
    int ans=0;
    // cout << r << "deb" << '\n';
    for(int i=0;i<n;i++) {
        if(a[i]<=0) ans++;
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
