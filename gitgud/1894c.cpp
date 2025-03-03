#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    
    int last=n-1;
    
    for(int i=0;i<min(k,n);i++) {
        if(a[last]>n) {
            cout << "NO" << '\n';
            return;
        }
        last+=n-a[last];
        last%=n;
    }

    cout << "YES" << '\n';
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
