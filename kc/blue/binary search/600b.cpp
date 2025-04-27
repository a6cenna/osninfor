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
    int n,m;cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    int b;
    while(m--){
        cin>>b;
        cout << (upper_bound(a, a+n, b)-a) << ' ';
        // cout << n-(upper_bound(a, a+n, b)-a) << ' ';
    }
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
