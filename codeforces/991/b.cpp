#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        int x;cin>>x;
        sum+=x;
    }
    if(sum%n==0) {
        cout << "YES" << '\n';
    }
    else {
        cout << "NO" << '\n';
    }
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
