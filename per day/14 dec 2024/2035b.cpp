#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    if(n==1 || n==3) {
        cout << -1 << '\n';
        return;
    }
    if(n%2==0) {
        while(n>2) {
            cout << 33;
            n-=2;
        }
        cout << 66 << '\n';
    }
    else {
        while(n>5){
            cout << 33;
            n-=2;
        }
        cout << 36366 << '\n';
    }
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
