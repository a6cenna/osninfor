#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pii pair<int,int>
#define pb push_back
#define fs first
#define sc second
#define ti3 tuple<int,int,int>

vector<int> par(100005);

int root(int x) {
    return (par[x]==x?x:par[x]=root(par[x]));
}

void merge(int x,int y) {
    int a=root(x),b=root(y);
    if(a==b) return;
    if(a>b) swap(a,b);
    par[b]=a;
}

void solve() {
    int n,m,k,h;cin>>n>>m>>k>>h;
    vector<ti3> edge;
    for(int i=0;i<m;i++) {
        int a,b,c;cin>>a>>b>>c;
        edge.pb({c,a,b});
    }
    sort(edge.begin(), edge.end());
    vector<ti3> usul;
    for(int i=0;i<k;i++) {
        int u,v,w;cin>>u>>v>>w;
        usul.pb({w,u,v});
    }

    int ans=-1;
    int l=0,r=k;
    while(l<=r) {
        int mid=(l+r)/2;
        int tmp=0;
        int cnt=0;
        for(int i=1;i<=n;i++) par[i]=i;
        vector<ti3> pake;
        for(int i=0;i<mid;i++) {
            pake.pb(usul[i]);
        }
        sort(pake.begin(), pake.end());
        int ll=0,rr=0;
        while(ll<pake.size()||rr<edge.size()) {
            if(rr==edge.size()||(ll<pake.size()&&pake[ll]<edge[rr])) {
                auto [w,u,v]=pake[ll];
                ll++;
                if(root(u)==root(v)) continue;
                tmp+=w;
                merge(u,v);
                cnt++;
            }
            else if(rr<edge.size()){
                auto [w,u,v]=edge[rr];
                rr++;
                if(root(u)==root(v)) continue;
                tmp+=w;
                merge(u,v);
                cnt++;
            }
        }
        if(tmp<=h&&cnt==n-1) {
            ans=mid;
            r=mid-1;
        }
        else l=mid+1;
    }

    cout << ans << '\n';
}

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    solve();
}

/*
3 2 2 3
1 2 2
2 3 2
1 3 1
1 2 1

4 2 2 5
1 2 2
3 4 2
2 3 3
1 4 10
*/
