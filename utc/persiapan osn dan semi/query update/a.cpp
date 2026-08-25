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

void solve() {
    int n;cin>>n;
    map<int,vector<int>> in,out;
    set<int> events;
    for(int i=1;i<=n;i++) {
        int l,r;cin>>l>>r;
        in[l].pb(i);
        out[r].pb(i);
        events.insert(l);events.insert(r);
    }

    // cout << "ok\n";

    set<int> ans;
    set<int> active;
    for(auto i:events) {
        for(auto x:in[i]) active.insert(x);
        if(!active.empty()) ans.insert(*active.rbegin());
        for(auto x:out[i]) active.erase(x);
    }

    cout << ans.size() << '\n';
}

int main() {
    war_without_reason
    
    int t;cin>>t;
    while(t--) solve();
}
