// in the pool

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
    int one=0,zero=0;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        if(a[i]==1)one++;
        if(a[i]==0)zero++;
    }
    if(zero==1) {
        cout << "YES" << '\n';
        return;
    }
    cout << (one&&zero?"YES":"NO") << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
