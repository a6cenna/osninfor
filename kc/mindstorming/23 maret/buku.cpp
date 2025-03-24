#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n,t;cin>>n>>t;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    sort(a,a+n);

    int ans=0;
    for(int i=0;i<n;i++) {
        if(t-a[i]<0) break;
        t-=a[i];
        ans++;
    }
    cout << ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
