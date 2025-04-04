// author: sofwant || a6cenna
// created at 03/04/2025
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
    ll n,k,x;cin>>n>>k>>x;
    ll a[n];
    ll sum=0;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        sum+=a[i];
    }
    ll ans=n*k;
    if(sum<x) {
        ll temp=x/sum;
        if(k<temp){
            cout << 0 << '\n';
            return;
        }
        if(temp*sum==x) {
            cout << n*k-temp*n+1 << '\n';
            return;
        }
        ans-=n*temp;
        sum*=(min(k, temp+1));
    }
    if(sum>=x) {
        for(int i=0;i<n;i++){
            sum-=a[i];
            if(sum<x) {
                ans-=(n-i-1);
                break;
            }
        }
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
