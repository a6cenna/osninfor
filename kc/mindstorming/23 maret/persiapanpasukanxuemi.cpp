#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n,k,l,c,d,p,a,b;cin>>n>>k>>l>>c>>d>>p>>a>>b;

    int soda=k*l;
    int jeruk=c*d;
    cout << min(soda/a, min(jeruk, p/b))/n;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
