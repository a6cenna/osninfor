#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    int on=0;
    for (int i = 0; i < 2*n; i++)
    {
        int x;cin>>x;
        if(x) {
            on++;
        }
    }
    cout << on%2 << " " << min(2*n-on, on) << '\n';
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
