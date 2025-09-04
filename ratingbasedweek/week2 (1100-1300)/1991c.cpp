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
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    bool ev=false;
    bool od=false;
    for(int i=0;i<n;i++) {
        if(a[i]%2==0) ev=true;
        if(a[i]%2==1) od=true;
    }   
    if(ev&&od) {
        cout << -1 << '\n';
        return;
    }
    vector<int> op;
    for(int i=29;i>=0;i--) {
        op.pb(1 << i);
    }
    if(ev) op.pb(1);
    cout << op.size() << '\n';
    for(auto &x:op) cout << x << ' ';
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
