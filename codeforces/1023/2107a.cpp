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
    int mx=INT_MIN;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        mx=max(mx, a[i]);
    }
    bool can=false;
    for(int i=1;i<n;i++) {
        if(a[i]!=a[0]) can=true;
    }
    if(can) {
        cout << "YES\n";
        for(int i=0;i<n;i++) {
            if(a[i]==mx) {
                cout << 2 << ' ';
            }
            else cout << 1 << ' ';
        }
    }
    else {
        cout << "NO";
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
