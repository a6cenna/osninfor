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
    for(auto &x:a)cin>>x;
    bool can=true;
    for(int i=0;i<n-1;i++) {
        if(a[i]==i+1) continue;
        if(a[i]==i+2&&a[i+1]==i+1) {
            i++;
            continue;
        }
        else can=false;
    }

    cout << (can?"YES":"NO") << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
