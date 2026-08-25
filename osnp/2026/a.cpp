#include <bits/stdc++.h>
using namespace std;

#define int long long

// perlu pembuktian!!

void solve() {
    string s;cin>>s;
    int n=s.length();
    int a=0,b=0;
    for(int i=0;i<n;i++) {
        if(s[i]=='A') a++;
        else b++;
    }

    // cout << a << ' ' << b << '\n';

    int ans=0;
    int mn=min(a, b/3);
    // cout << mn << '\n';
    ans+=mn;
    a-=mn;
    b-=mn*3;

    if(b>3) ans+=b/4;
    cout << ans << '\n';
}

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    solve();
}

/*
BABABABABABA

ABBBAABBBBBBB

BBBBBBBBBBB

AAAABBBBBBBBBBBB
*/