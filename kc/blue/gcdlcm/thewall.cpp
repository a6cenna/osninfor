#include <bits/stdc++.h>

using namespace std;

void solve() {
    int x,y,a,b;cin>>x>>y>>a>>b;
    // cari berapa banyak kelipatan dari kpk x y diantara a b

    long long kpk=lcm(x,y);
    cout << b/kpk - (a-1)/kpk;// hilangkan yang kurang dari a (a termasuk)
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
