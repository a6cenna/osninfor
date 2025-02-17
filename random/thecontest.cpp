#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++) {cin>>a[i]; sum+=a[i];}
    int m;cin>>m;
    int ans=INT_MAX;
    for(int i=0;i<m;i++) {
        int l,r;cin>>l>>r;
        if(sum<l) ans=min(ans, l);
        else if(sum<=r) ans=min(ans, sum);
    }
    if(ans!=INT_MAX) {
        cout << ans;
    }
    else {
        cout << -1;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
