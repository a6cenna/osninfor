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
    int n,x;cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];

    int first=0,last=n-1;

    for(int i=0;i<n;i++) {
        if(a[i]==1) {
            first=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--) {
        if(a[i]==1) {
            last=i;
            break;
        }
    }

    cout << (last-first+1>x?"NO\n":"YES\n");
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
