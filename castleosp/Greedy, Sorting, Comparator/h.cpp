// war without reason

#include <bits/stdc++.h>
using namespace std;

#define war_without_reason ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back
#define int ll

void solve() {
    int n;cin>>n;
    int panjang,lebar;cin>>panjang>>lebar;
    int l=1,r=2e9;
    int ans=2e9;
    while(l<=r) {
        int mid=(l+r)/2;
        if((mid/panjang)*(mid/lebar)>=n) {
            r=mid-1;
            ans=mid;
        }
        else l=mid+1;
    }

    cout << ans << '\n';
}

signed main() {
    war_without_reason

    solve();
}
