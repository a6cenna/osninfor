#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n,x;cin>>n>>x;
    if(x%2==0) {
        cout << x << ' ';
        for (int i = 0; i < n-1; i++)
        {
            cout << 0 << ' ';
        }
        cout << '\n';
    }
    else {
        int lowest=(x+1) & ~x;
        if(x+1==lowest && n-1<lowest && n-1>=lowest/2) {
            for (int i = 0; i < n; i++)
            {
                cout << i << ' ';
            }
            cout << '\n';
        }
        else {
            for (int i = 0; i < min(lowest, n-1); i++)
            {
                cout << i << ' ';
            }
            for (int i = min(lowest, n-1); i < n; i++)
            {
                cout << x << ' ';
            }
            cout << '\n';
        }
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
