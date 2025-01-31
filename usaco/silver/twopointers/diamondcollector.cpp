#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("diamond.in", "r", stdin);
    freopen("diamond.out", "w", stdout);

    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    sort(a, a+n);
    int start[n];
    int r=0;
    for(int l=0;l<n;l++) {
        while(r<n && a[r]-a[l]<=k) r++;
        start[l]=r-l;
    }
    int maxStart[n+1];
    maxStart[n]=0;
    for(int i=n-1;i>=0;i--) {
        maxStart[i]=max(maxStart[i+1], start[i]);
    }

    int ans=0;
    for(int l=0;l<n;l++) {
        ans=max(ans, start[l]+maxStart[start[l]+l]);
    }

    cout << ans;
}
