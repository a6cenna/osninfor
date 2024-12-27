#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    int b[n];
    for(int i=0;i<n;i++) {
        cin>>b[i];
    }

    int pref[n];
    int suff[n];
    for (int i = 0; i < n; i++)
    {
        pref[i]=b[i]+i;
        suff[i]=b[i]-i;
    }
    for (int i = 1; i < n; i++)
    {
        pref[i]=max(pref[i], pref[i-1]);
    }
    for (int i=n-2;i>=0;i--) {
        suff[i]=max(suff[i], suff[i+1]);
    }
    int ans=INT_MIN;
    for (int i = 1; i < n-1; i++)
    {
        ans=max(ans, pref[i-1]+b[i]+suff[i+1]);
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
