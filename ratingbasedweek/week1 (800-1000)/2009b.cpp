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
    int a[n][4];
    for(int i=0;i<n;i++) {
        for(int j=0;j<4;j++) {
            char c;cin>>c;
            if(c=='.') a[i][j]=0;
            else a[i][j]=1;
        }
    }
    vector<int> ans;
    for(int i=n-1;i>=0;i--) {
        for(int j=3;j>=0;j--) {
            if(a[i][j]==1) ans.pb(j+1);
        }
    }

    for(int &x:ans) cout << x << ' ';
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
