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

int depth[105];
int a[105];

void divcon(int l, int r, int d) {
    int mx=l;
    if(l==r) {
        depth[l]=d;
        return;
    }
    if(l>r) {
        return;
    }
    for(int i=l+1;i<=r;i++) {
        if(a[i]>a[mx])mx=i; 
    }
    depth[mx]=d;
    divcon(l,mx-1,d+1);
    divcon(mx+1,r,d+1);
}

void solve() {
    int n;cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    divcon(0, n-1, 0);
    for(int i=0;i<n;i++) {
        cout << depth[i] << ' ';
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
