#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n,a,b,c;cin>>n>>a>>b>>c;

    int sum = a+b+c;

    int res = floor(n/sum)*sum;
    int ans=floor(n/sum)*3;
    n-=res;
    if(n==0) {
        cout << ans << '\n';
    }
    else if(n-a<=0) {
        cout << ans+1 << '\n';
    }
    else if(n-a-b<=0) {
        cout << ans+2 << '\n';
    }
    else {
        cout << ans+3 << '\n';
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
