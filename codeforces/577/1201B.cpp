#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    long long sum=0;
    long long maxim=LLONG_MIN;
    for (int i=0;i<n;i++) {
        long long x;cin>>x;
        sum+=x;
        maxim=max(maxim,x);
    }
    
    cout << (sum%2==0 && 2*maxim <= sum ? "YES" : "NO") << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
}
