#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    int a[1001]={0};
    int x;
    for(int i=0;i<n;i++) {
        cin>>x;
        a[x]++;
        if(a[x]>(n+1)/2) {
            cout << "NO" << '\n';
            return;
        }
    }

    cout << "YES" << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
