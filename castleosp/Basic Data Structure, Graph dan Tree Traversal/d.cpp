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
#define ti3 tuple<int,int,int>

int par[100005];

int root(int x) {
    return(par[x]==x?x:par[x]=root(par[x]));
}

void merge(int x, int y) {
    int a=root(x),b=root(y);
    if(a==b) return;
    if(a>b) swap(a,b);
    par[a]=b;
}

void solve() {
    int n,m;cin>>n>>m;
    for(int i=1;i<=n;i++) par[i]=i;
    priority_queue<ti3, vector<ti3>, greater<ti3>> pq;
    int ans=0;
    while(m--) {
        int a,b,c;cin>>a>>b>>c;
        pq.push({c,a,b});
    }
    int cnt=0;
    while(!pq.empty()&&cnt<n-1) {
        auto [w, u, v]=pq.top();
        pq.pop();
        if(root(u)!=root(v)) {
            merge(root(u), root(v));
            cnt++;
            ans+=w;
        }
    }

    if(cnt==n-1) cout << ans << '\n';
    else cout << "IMPOSSIBLE\n";
}

signed main() {
    war_without_reason

    solve();
}
