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
    int n,m,k;cin>>n>>m>>k;
    int shift=m%k;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cout << ((j+shift*i)%k)+1 << ' ';
        }
        cout << '\n';
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
