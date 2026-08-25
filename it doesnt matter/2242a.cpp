// war without reason

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
    int c[n];
    for(int i=0;i<n;i++) cin>>c[i];
    int cnt=0;
    for(int i=0;i<n;i++) {
        if(c[i]>2||cnt>=2) {
            cout << "YES\n";
            return;
        }
        if(c[i]==2) cnt++;
    }
    cout << (cnt>=2?"YES":"NO") << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
