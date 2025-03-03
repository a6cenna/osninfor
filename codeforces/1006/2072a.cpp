#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n,k,p;cin>>n>>k>>p;
    int need=abs(k)/p;
    if(k%p!=0) need++;
    
    cout << (need<=n ? need : -1) << '\n';
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
