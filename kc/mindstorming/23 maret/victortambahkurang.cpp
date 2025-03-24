#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    int sum=0;
    int x;
    for(int i=0;i<n;i++) {
        cin>>x;
        sum+=x;
    }
    cout << (sum%n==0 ? n : n-1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
