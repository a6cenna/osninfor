#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n,k;cin>>n>>k;
    int bits[31]={0};
    for(int i=0;i<n;i++) {
        int a;cin>>a;
        for(int j=30;j>=0;j--) {
            if(a & (1<<j)) bits[j]++;
        }
    }
    int ans=0;
    for(int i=30;i>=0;i--) {
        int need=n-bits[i];
        if(need<=k) {
            ans+=(1 << i);
            k-=need;
        }
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
