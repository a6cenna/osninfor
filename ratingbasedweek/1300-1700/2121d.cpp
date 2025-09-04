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
    int b[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    vector<pii>ans;
    for(int i=0;i<n;i++) {
        for (int j=0;j<n-1;j++) {
            if(a[j+1]<a[j]) {
                swap(a[j+1],a[j]);
                ans.pb({1, j+1});
            }
        }
    }
    for(int i=0;i<n;i++) {
        for (int j=0;j<n-1;j++) {
            if(b[j+1]<b[j]) {
                swap(b[j+1],b[j]);
                ans.pb({2, j+1});
            }
        }
    }
    for(int i=0;i<n;i++) {
        if(a[i]>b[i]) {
            ans.pb({3, i+1});
        }
    }
    cout << ans.size() << '\n';
    for(auto [op, idx]:ans) {
        cout << op << ' ' << idx << '\n';
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
