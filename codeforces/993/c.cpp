#include <bits/stdc++.h>

using namespace std;

void solve() {
    int m,a,b,c;cin>>m>>a>>b>>c;
    int ans=0;
    int m1=m;
    if(a>m) {
        ans+=m;
        m=0;
    }
    else {
        ans+=a;
        m-=a;
    }
    if(b>m1) {
        ans+=m1;
        m1=0;
    }
    else {
        ans+=b;
        m1-=b;
    }

    if(c>m1+m) {
        ans+=m1+m;
    }
    else {
        ans+=c;
    }
    cout << ans << '\n';
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
