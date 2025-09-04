// author: sofwant || a6cenna

#include <bits/stdc++.h>
using namespace std;

#define suffering_leaves_suffering_leaves ios::sync_with_stdio(false); cin.tie(nullptr);
#define int ll
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back

void solve() {
    int n,k;cin>>n>>k;
    int a[n];
    int sum=0;
    int mx=INT_MIN;
    int mn=INT_MAX;
    for(int i=0;i<n;i++) cin>>a[i],sum+=a[i],mx=max(mx,a[i]),mn=min(mn,a[i]);
    int more=0;
    for(int i=0;i<n;i++) {
        if(a[i]==mx) more++; 
    }
    if(more==1) mx--;
    if(mx-mn>k||sum%2==0) {
        cout << "Jerry";
    }
    else cout << "Tom";
    cout << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
