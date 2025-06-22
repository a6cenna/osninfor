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

vector<int> par;

int root(int x) {
    if (par[x]==x) return x;
    return par[x] = root(par[x]);
}

void merge(int a, int b) {
    a = root(a);
    b = root(b);

    par[b]=a;
}

void solve() {
    int n,q;cin>>n>>q;

    par.resize(n+1);
    for(int i=1;i<=n;i++) {
        par[i]=i;
    }
    
    while(q--) {
        int x,a,b;cin>>x>>a>>b;
        if(x==1) {
            merge(a,b);
        }
        else {
            cout << (root(a)==root(b)?"Y":"T") << '\n';
        }
    }
}   

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
