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

const ll N=6e3+5;

ll par[N];

int root(int x) {
    return (par[x]==x?x:par[x]=root(par[x]));
}

int merge(int x, int y) {
    int a=root(x);
    int b=root(y);
    if(a==b) return 0;
    par[b]=a;
    return 1;
}

void solve() {
    int n;cin>>n;
    vector<int> ans;
    for(int i=1;i<=2*n;i++) par[i]=i;
    for(int i=1;i<=n;i++) {
        int x,y;cin>>x>>y;
        if(merge(x,y)) ans.pb(i);
    }
    cout << ans.size() << '\n';
    for(auto x:ans) {
        cout << x << ' ';
    }
    cout << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
