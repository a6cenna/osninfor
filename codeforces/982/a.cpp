#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int maxw=0, maxh=0;
    for (int i = 0; i < n; i++)
    {
        int x,y;
        cin >> x >> y;
        maxw=max(x, maxw);
        maxh=max(y, maxh);
    }
    cout << 2*(maxw+maxh) << endl;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
