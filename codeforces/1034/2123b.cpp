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
    int n,j,k;cin>>n>>j>>k;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    if(k>1) cout << "YES";
    else {
        int maxx=INT_MIN;
        for(int i=0;i<n;i++) {
            maxx=max(maxx, a[i]);
        }
        if(a[j-1]==maxx) cout << "YES";
        else cout << "NO";
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
