#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n,k;cin>>n>>k;

    int co=max(n-2*k, 0);
    int ans=n*(n-1)/2 + co*(co-1)/2;
    
    cout << ans;
}

int main() {
    solve();
}
