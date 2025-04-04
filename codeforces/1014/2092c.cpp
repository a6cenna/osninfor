// author: sofwant || a6cenna
// created at 04/04/2025
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
    int n;cin>>n;
    ll a[n];
    ll ans=INT_MIN;
    int odd=0,even=0;
    ll sum=0;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        sum+=a[i];
        if(a[i]%2==0)even++;
        else odd++;
        ans=max(ans,a[i]);
    }
    if(odd>0&&even>0){
        cout << sum-odd+1 << '\n';
    }
    else {
        cout << ans << '\n';
    }
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
