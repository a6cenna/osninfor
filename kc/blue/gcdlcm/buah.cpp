#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n,a,b;cin>>n>>a>>b;

    cout << lcm(a,b)/a + lcm(a,b)/b;
}   

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
