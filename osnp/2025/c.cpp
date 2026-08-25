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
    map<int,int> mp;
    for(int p=2;p<=1e6;p++) {
        if(p*p>n) break;
        while(n%p==0) {
            mp[p]++;
            n/=p;
        }
    }
    if(n!=1) mp[n]++;
    int mn=INT_MAX;
    int ans=n;
    for(auto [x,y]:mp) {
        if(y<mn) {
            ans=x;
            mn=y;
        }
    }
    
    cout << ans << '\n';
}

signed main() {
    war_without_reason

    solve();
}
