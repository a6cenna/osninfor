// war without reason

#include <bits/stdc++.h>
using namespace std;

#define war_without_reason ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back
#define int ll

void solve() {
    int n;cin>>n;
    string s;cin>>s;

    vector<int> prefo(n+1,0), suffn(n+2,0);

    for(int i=1;i<=n;i++) {
        prefo[i]=prefo[i-1]+(s[i-1]=='O');
    }
    for(int i=n;i>=1;i--) {
        suffn[i]=suffn[i+1]+(s[i-1]=='N');
    }

    int ans=0;
    for(int i=0;i<n;i++) {
        if(s[i]=='S') {
            ans+=prefo[i+1]*suffn[i+1];
        }
    }

    cout << ans << '\n';
}

signed main() {
    war_without_reason

    solve();
}
