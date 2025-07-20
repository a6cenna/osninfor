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

const int N=5e5;

int par[N+5];
int g[N+5];

int root(int x) {
    if(par[x]!=x) return par[x]=root(par[x]);
    return x;
}

void merge(int x,int y) {
    int a=root(x);
    int b=root(y);

    if(a == b) return;
    
    par[b]=a;
    g[a]+=g[b];
    g[b] = 0;
}

void solve() {
    int n,m;cin>>n>>m;
    for(int i=1;i<=n;i++) {
        par[i]=i;
        g[i]=1;
    }
    for(int i=0;i<m;i++) {
        int k;cin>>k;
        int akar=-1;
        while(k--) {
            int ki;cin>>ki;
            if(akar==-1) akar=ki;
            else merge(akar, ki);
        }
    }

    for(int i=1;i<=n;i++) {
        cout << g[root(i)] << ' ';
    }
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
