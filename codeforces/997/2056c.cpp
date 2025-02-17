#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    if(n==6) {
        cout << "1 1 2 3 1 2" << '\n';
    }
    else {
        for (int i = 0; i < n-2; i++)
        {
            cout << i+1 << ' ';
        }
        cout << "1 2" << '\n';
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
