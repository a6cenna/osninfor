#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    if(n==1) {
        cout << "*" << '\n';
        return;
    }

    for(int i=1;i<n;i++) {
        for(int j=0;j<n-i;j++) {
            cout << ' ';
        }
        for(int j=0;j<i*2-1;j++) {
            cout << '*';
        }
        for(int j=0;j<2*(n-i)-1;j++) {
            cout << ' ';
        }
        for(int j=0;j<i*2-1;j++) {
            cout << '*';
        }
        cout << '\n';
    }
    int x=2*n-1;
    for(int i=1;i<=2*n-1;i++) {
        for(int j=1;j<i;j++) {
            cout<< ' ';
        }
        for(int j=0;j<2*(x-i+1)-1;j++) {
            cout << '*';
        }
        cout << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
