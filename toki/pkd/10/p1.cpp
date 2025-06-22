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

const int MAXN=90000;

int par[MAXN];
bool muncul[MAXN];
int sz=0;

int root(int x) {
    if(par[x]==x) return x;
    return par[x]=root(par[x]);
}

void merge(int a, int b) {
    if(!muncul[a]||!muncul[b]) return;
    a=root(a);
    b=root(b);
    
    if(a!=b) sz--;
    
    par[b]=a;
}

void solve() {
    int n,m;cin>>n>>m;
    pii grid[n*m];
    
    int idx=0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            int x;cin>>x;
            grid[idx]={x,idx};
            par[idx]=idx;
            idx++;
        }
    }
    sort(grid, grid+n*m, greater<pii>());
    
    int ans=0;
    for(int i=0;i<n*m;i++) {
        sz++;
        
        int cur=grid[i].sc;

        int r=cur/m;
        int c=cur%m;
        muncul[cur]=true;
        if(r>0) merge(r*m+c, (r-1)*m+c);
        if(r<n-1) merge(r*m+c, (r+1)*m+c);
        if(c>0) merge(r*m+c, r*m+c-1);
        if(c<m-1) merge(r*m+c, r*m+c+1);
        if(grid[i].fs!=grid[i+1].fs || i==n*m-1) ans=max(ans, sz);
    }

    cout << ans << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
