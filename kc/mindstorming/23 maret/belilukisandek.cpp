#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long a,b,x,y;cin>>a>>b>>x>>y;
    long long fpb=gcd(x,y);
    x/=fpb;
    y/=fpb;
    cout << min(a/x, b/y);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
