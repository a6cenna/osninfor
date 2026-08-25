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

const int N=1e6;

vector<int> par(N+5), sz(N+5);

int root(int x) {
    return (par[x]==x?x:par[x]=root(par[x]));
}

void merge(int x, int y) {
    int a=root(x);
    int b=root(y);
    if(a==b) return;
    if(sz[a]>sz[b]) swap(a,b);

    par[a]=b;
    sz[b]+=sz[a];
}

void solve() {
    int n;cin>>n;
    for(int i=1;i<=n;i++) {
        par[i]=i;
        sz[i]=1;
    }
}

int main() {
    war_without_reason

    solve();
}
