#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {cin>>a[i];}
    sort(a, a+n);
    int tempmax=0;
    for (int i = 0; i < n; i+=2)
    {
        if(max(tempmax, a[i])!= max(tempmax, a[i+1])) {
            cout << "NO" << '\n';
            return;
        }

        tempmax=max(tempmax, a[i])+1;
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
