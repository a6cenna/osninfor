// author: sofwant || a6cenna
// created at 24/03/2025
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
    int n,k;cin>>n>>k;
    
    int a[n];

    for(int i=0;i<n;i++) cin>>a[i];

    if(n==k) {
        for (int i = 1; i < k; i+=2)
        {
            if(a[i]!=(i+1)/2) {
                cout << (i+1)/2 << '\n';
                return;
            }
        }
        cout << k/2+1 << '\n';
    }
    else {
        // elemen pertama pasti dibilih, karena genap ada dua kasus
        // dari elemen ke-1 (0 idx) sampai n-k+1
        for(int i=1;i<n-k+2;i++) {
            if(a[i]!=1) {
                cout << 1 << '\n';
                return;
            }
        }
        cout << 2 << '\n';
    }
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
