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
    int n,x;cin>>n>>x;
    int od=0,ev=0;
    for(int i=0;i<n;i++) {
        int y;cin>>y;
        if(y%2==0) ev++;
        else od++;
    }
    int cur=max(0, x-ev);
    if(cur%2==1&&od>=cur) {
        cout << "Yes\n";
    }
    else if(cur%2==0&&od>cur&&ev!=0) {
        cout << "Yes\n";
    }
    else cout << "No\n";
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
