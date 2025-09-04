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
    int n,m;cin>>n>>m;
    int a[n], b[n];
    vector<pii> v;
    for(int i=0;i<n;i++) {
        cin>>a[i]>>b[i];
        v.pb({a[i], b[i]});
    }
    sort(a, a+n);
    sort(b, b+n);
    for(pii cur:v) {
        int l=0,r=n-1;
        int ans=0;
        while(l<=r) {
            int mid=(l+r)/2;
            if(b[mid]>=cur.fs) {
                ans=n-mid;
                r=mid-1;
            }
            else l=mid+1;
        }
        l=0;
        r=n-1;
        int dis=0;
        while(l<=r) {
            int mid=(l+r)/2;
            if(a[mid]>cur.sc) {
                dis=n-mid;
                r=mid-1;
            }
            else l=mid+1;
        }
        cout << ans-dis-1 << '\n';;
    }
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
