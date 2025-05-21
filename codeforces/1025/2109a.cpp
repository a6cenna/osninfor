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
    for(int i=0;i<n;i++) cin>>a[i];
    bool zer=false;
    bool pos=true;
    for(int i=0;i<n;i++) {
        if(a[i]==0) zer=true;
        if(i!=n-1) {
            if(a[i]==0&&a[i]==a[i+1]) {
                pos=false;
            }
        }
    }
    if(!zer||!pos) {
        cout << "YES\n";
    }
    else cout << "NO\n";
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
