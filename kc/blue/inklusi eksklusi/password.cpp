#include <bits/stdc++.h>

using namespace std;

int factorial(int n) {
    if(n==0) return 1;
    return factorial(n-1)*n;
}

void solve() {
    int n;cin>>n;
    int sampah;
    for(int i=0;i<n;i++) cin>>sampah;
    cout << factorial(10-n)/(2*factorial(10-n-2))*6 << '\n';
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
