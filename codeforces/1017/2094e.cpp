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
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    
    vector<int> cnt(30, 0);
    for(auto a:a){
        for(int i=0;i<30;i++) {
            if(a & (1<<i))cnt[i]++;
        }
    }
    ll ans=0;
    for(auto a:a) {
        ll sum=0;
        for(int i=0;i<30;i++) {
            ll temp = 1LL << i;
            if(temp & a) {
                sum+=(n-cnt[i])*temp;
            }
            else sum+=cnt[i]*temp;
        }
        ans=max(ans,sum);
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
