// author: sofwant || a6cenna
// created at 02/04/2025
// suffering leaves suffering leaves.

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
    for(int i=0;i<n-2;i++)cin>>a[i];
    for(int i=0;i<n-4;i++) {
        if(a[i]==1&&a[i+2]==1&&a[i+1]==0) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
