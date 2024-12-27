#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, x;cin>>n>>x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    int prefix=0;
    int ans=0;
    map<long long, int> sums;
    sums[0]=1;

    for (int i = 0; i < n; i++)
    {
        prefix+=a[i];

        ans+=sums[prefix-x];

        sums[prefix]++;
    }
    
    cout << ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
