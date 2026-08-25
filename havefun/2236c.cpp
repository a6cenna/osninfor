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
    int a,b,x;cin>>a>>b>>x;
    int mx=max(a,b);
    int mn=min(a,b);
    int ans=LLONG_MAX/2;
    int cur=0;
    while(mx!=mn) {
        ans=min(ans, cur+abs(mx-mn));
        mx/=x;
        cur++;
        if(mx<mn) swap(mx,mn);
    }

    cout << min(ans,cur) << '\n';
}

signed main() {
    war_without_reason

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
