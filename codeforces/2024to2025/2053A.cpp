#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    int a[n];
    for (int i=0;i<n;i++) {
        cin>>a[i];
    }

    for(int i=0;i<n-1;i++) {
        if(min(a[i], a[i+1])*2>max(a[i],a[i+1])) {
            cout << "YES" << '\n';
            return;
        }
    }
    cout << "NO" << '\n';
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
