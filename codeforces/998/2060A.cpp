#include <bits/stdc++.h>

using namespace std;

void solve() {
    int a[5];cin>>a[0]>>a[1]>>a[3]>>a[4];
    a[2]=0;
    int ans=INT_MIN;
    a[2]=a[0]+a[1];
    int curr=1;
    for (int i = 1; i < 3; i++)
    {
        if(a[i+2]==a[i]+a[i+1]) curr++;
    }
    ans=max(ans, curr);
    curr=0;
    a[2]=a[4]-a[3];
    for (int i = 1; i < 3; i++)
    {
        if(a[i+2]==a[i]+a[i+1]) curr++;
    }
    ans=max(ans, curr);
    curr=0;
    a[2]=a[3]-a[1];
    for (int i = 1; i < 3; i++)
    {
        if(a[i+2]==a[i]+a[i+1]) curr++;
    }
    ans=max(ans, curr);
    curr=0;

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
