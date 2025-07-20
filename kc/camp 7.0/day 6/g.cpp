// author: sofwant || a6cenna

#include <bits/stdc++.h>
using namespace std;

#define suffering_leaves_suffering_leaves ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back

const int N=1e5;

int par[N+5];
int g[N+5];

int root(int x) {
    if(par[x]!=x) return par[x]=root(par[x]);
    return x;
}

void merge(int x,int y) {
    int a=root(x);
    int b=root(y);

    if(a==b) return;
    par[b]=a;
    g[a]+=g[b];
}

void solve() {
    int n,m;cin>>n>>m;
    int sum=(n*(n-1))/2;
    vector<int>ans;
    ans.pb(sum);
    for(int i=1;i<=n;i++) {
        par[i]=i;
        g[i]=1;
    }
    m--;
    int k=0;
    while(m--) {
        int x,y;cin>>x>>y;
        if(root(x)==root(y)) {
            ans.pb(max(sum,0));
            continue;
        }
        sum-=(g[root(x)]*g[root(y)]);
        cout << g[root(x)] << ' ' << g[root(y)] << "dbg\n";
        merge(x, y);
        ans.pb(max(sum,0));
    }

    sort(ans.begin(), ans.end());
    for(auto a:ans) cout << a << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
