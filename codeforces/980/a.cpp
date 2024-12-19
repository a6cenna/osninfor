#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long a,b;
    cin >>a>>b;


    if (a>=b) cout << a <<'\n';
    else {
        if(b<=2*a) {
            cout << 2*a-b << "\n";
        }
        else {
            cout << 0 << "\n";
        }
    }
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
