#include <bits/stdc++.h>

using namespace std;

void solve() {
    int r,x,y,x1,y1;cin>>r>>x>>y>>x1>>y1;
    long long ans=ceil(sqrt(pow(abs(x-x1),2)+pow(abs(y-y1),2))/(2LL*r));

    cout << ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
