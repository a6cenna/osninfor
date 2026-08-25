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

int n,p,q;

vector<vector<int>> perm;
vector<int> cur;
vector<bool> used;

void pre() {
    if(cur.size()==n) {
        perm.pb(cur);
        return;
    }

    for(int i=1;i<=n;i++) {
        if(used[i]) continue;

        used[i]=true;
        cur.pb(i);
        pre();
        used[i]=false;
        cur.pop_back();
    }
}

void solve() {
    cin>>n;
    used.resize(n+1,0);
    p=0;
    q=0;
    for(int i=0;i<n;i++) {
        int x;cin>>x;
        p=p*10+x;
    }
    for(int i=0;i<n;i++) {
        int x;cin>>x;
        q=q*10+x;
    }
    pre();
    int ans=0;
    for(auto v:perm) {
        int tmp=0;
        for(int i=0;i<n;i++) {
            tmp=tmp*10+v[i];
        }
        if(tmp>p&&tmp<q) ans++;
    }

    cout << ans << '\n';
}

signed main() {
    war_without_reason

    solve();
}
