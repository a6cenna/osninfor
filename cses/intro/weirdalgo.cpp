#include <bits/stdc++.h>

using namespace std;

void solve(long long n) {
    if(n==1) {
        return;
    }
    if(n%2==0) {
        long long x = n/2;
        cout << x << " ";
        solve(x);
    }
    else {
        long long x = n*3+1;
        cout << x << " ";
        solve(x);
    }
}

int main() {
    long long n;cin >> n;

    cout << n << " ";
    solve(n);
}
