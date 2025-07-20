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

const int N=105;

int par[N];
int g[N];

int root(int x) {
    return (par[x]==x?x:par[x]=root(par[x]));
}

void merge(int x,int y) {
    int a=root(x);
    int b=root(y);
    if(a==b) return;
    par[b]=a;
    g[a]+=g[b];
    g[b]=0;
}

void solve() {
    int n,m;cin>>n>>m;
    set<int>st;
    for(int i=1;i<=m;i++) {
        par[i]=i;
        g[i]=1;
    }
    int ans=-1;
    int zero=0;
    int cnt=n;
    while(cnt--) {
        int k;cin>>k;
        int rt=-1;
        if(k==0) {
            zero++;
            continue;
        }
        for(int i=0;i<k;i++) {
            int x;cin>>x;
            st.insert(x);
            if(rt==-1) rt=x;
            else merge(rt,x);
        }
    }
    for(auto a:st) {
        if(g[a]!=0&&a!=0) ans++;
    }

    if(zero==n) cout << zero;
    else cout << ans+zero;
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
