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

void solve() {
    int x,y,x1,y1;cin>>x>>y>>x1>>y1;
    if(x==y||x1==y1||(x<y&&x1>y1)||(x>y&&x1<y1)) cout << "NO\n";
    else cout << "YES\n";
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
