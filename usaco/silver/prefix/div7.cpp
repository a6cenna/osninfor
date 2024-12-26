#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("div7.in", "r", stdin);
    freopen("div7.out", "w", stdout);

    int n;cin>>n;
    vector<long long> a(n+1);
    a[0]=0;
    for(int i=1;i<=n;i++) {
        int x;cin>>x;
        a[i]=a[i-1]+x;
    }
    int ans=0;
    for(int r=1;r<=n;r++) {
        for(int l=1;l<=r;l++) {
            if((a[r]-a[l-1])%7==0) {
                ans=max(ans, r-(l-1));
            }
        }
    }

    cout << ans;
}
