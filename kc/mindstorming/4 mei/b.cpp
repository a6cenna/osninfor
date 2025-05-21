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
    if(n%2==0) cout << n/2 << ' ' << n/2;
    else if(n%3==0) cout << n/3 << ' ' << n*2/3;
    else {
        for(int i=2;i*i<=n;i++) {
            if(n%i==0) {
                int x=n/i;
                cout << x << ' ' << n-x << '\n';
                return;
            }
        }
        cout << n-1 << ' ' << 1;
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
