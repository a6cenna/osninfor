// in the pool

#include <bits/stdc++.h>
using namespace std;

#define suffering_leaves_suffering_leaves ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back

void solve() {
    int x,y;cin>>x>>y;
    if(y>0)x-=y*2;
    if(y<0)x-=abs(y)*4;
    y=0;
    // cout << x << '\n';
    if(x>=0&&x%3==0) cout << "YES" << '\n';
    else cout << "NO" << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
