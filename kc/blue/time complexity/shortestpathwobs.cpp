#include <bits/stdc++.h>

using namespace std;

void solve() {
    int xa,ya;cin>>xa>>ya;
    int xb,yb;cin>>xb>>yb;
    int xf,yf;cin>>xf>>yf;

    cout << abs(yb-ya)+abs(xb-xa) + (((xf==xb && xb==xa) && yf > min(ya,yb)) && yf < max(ya, yb) || ((ya==yb && yf==ya) && xf > min(xa,xb) && xf < max(xa, xb))  ? 2 : 0) << '\n';
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
