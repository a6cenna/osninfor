// author: sofwant || a6cenna

#include <bits/stdc++.h>
using namespace std;

#define suffering_leaves_suffering_leaves ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define int ll
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back

int A,B;
vector<int>pos;

int cnt(int x) {
    return upper_bound(pos.begin(), pos.end(), x)-pos.begin();
}

int divcon(int l,int r) {
    int avngr=cnt(r)-cnt(l-1);
    int res;
    if(avngr>0)res=B*avngr*(r-l+1);
    else res=A; 
    if(l==r||avngr==0) return res;
    int mid=(l+r)/2;
    return res=min(res, divcon(l, mid)+divcon(mid+1, r));
}

void solve() {
    int n,m;cin>>n>>m>>A>>B;
    while(m--) {
        int a;cin>>a;
        pos.pb(a);
    }
    sort(pos.begin(), pos.end());
    cout << divcon(1, (1<<n));
}

signed main() {
    suffering_leaves_suffering_leaves

    solve();
}
