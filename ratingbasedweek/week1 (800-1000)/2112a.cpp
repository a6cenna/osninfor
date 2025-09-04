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
    int a,x,y;cin>>a>>x>>y;
    int temp=x;
    x=min(x,y);
    y=max(temp,y);
    if((a>x&&a<y)||abs(a-x)==0||abs(a-y)==0) cout << "NO\n";
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
