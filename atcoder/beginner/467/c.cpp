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
    int n,m;cin>>n>>m;
    int a[n],b[n-1];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n-1;i++) cin>>b[i];

    int ans=0;
    for(int i=0;i<n-1;i++) {
        if((a[i]+a[i+1])%m==b[i]) continue;
        if(i+2<n&&(((a[i]+a[i+1])%m==0&&b[i]==1&&b[i+1]==1&&(a[i+1]+a[i+2])%m==0) || ((a[i]+a[i+1])%m==1&&b[i]==0&&b[i+1]==0&&(a[i+1]+a[i+2])%m==1))) {
            ans++;
            a[i+1]++;
        }
        else if(i-1>=0&&(a[i-1]+a[i])%m==b[i-1]) {
            ans++;
            a[i+1]++;
        }
        else {
            a[i]++;
            ans++;
        }
    }

    cout << ans << '\n';
}

signed main() {
    war_without_reason

    solve();
}
