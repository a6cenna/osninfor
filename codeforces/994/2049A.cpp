#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]==0) continue;
        else {
            while (a[i+1]!=0) {
                i++;
            }
            ans++;
            if(ans>2) {
                cout << 2 << '\n';
                return;
            }
        }
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
