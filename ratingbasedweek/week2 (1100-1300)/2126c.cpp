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
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int cur=a[k-1];
    sort(a,a+n);
    int mom=0;
    for(int i=0;i<n;i++) {
        if(cur>=a[i]) continue;
        if(a[i]-cur<=cur-mom) {
            mom+=a[i]-cur;
            cur=a[i];
        }
        else {
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
