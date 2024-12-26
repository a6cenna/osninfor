#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,q;cin>>n>>q;
    vector<long long> a(n+1, 0);
    for(int i=1;i<=n;i++) {
        int x;cin>>x;
        a[i]=a[i-1]+x;
    }
    while(q--) {
        int x,y;cin>>x>>y;
        cout << a[y]-a[x] << '\n';
    }
}
