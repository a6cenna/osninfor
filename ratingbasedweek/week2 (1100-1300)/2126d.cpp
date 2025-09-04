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
#define ti3 tuple<int,int,int>

void solve() {
    int n,k;cin>>n>>k;
    ti3 lrreal[n];
    for(int i=0;i<n;i++) {
        int l,r,real;cin>>l>>r>>real;
        lrreal[i]={l,r,real};
    }
    sort(lrreal,lrreal+n);
    for(int i=0;i<n;i++) {
        auto [l,r,real]=lrreal[i];
        if(k>=l&&k<=r&&k<real) k=real;
    }
    cout << k << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
