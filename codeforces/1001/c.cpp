#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;

    long long a[n];
    for(int i=0;i<n;i++) cin>>a[i];

    int l=n;
    long long ans=LLONG_MIN;
    for(int i=0;i<n;i++) {
        long long sum=0;
        for(int j=0;j<l;j++) sum+=a[j];
        if(i==0) ans=max(ans, sum);
        else ans=max(ans, max(sum, -sum));
        for(int j=0;j<l-1;j++) a[j]=a[j+1]-a[j];
        l--;
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
