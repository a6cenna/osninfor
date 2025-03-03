#include <bits/stdc++.h>

using namespace std;

void solve() {
    int p,q,r;cin>>p>>q>>r;
    int n;cin>>n;
    for (int i = 0; i < n; i++)
    {
        long long t;cin>>t;
        if(t%p==0&&t%q==0&&t%r==0) cout << "YA" << '\n';
        else cout << "TIDAK" << '\n';
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
