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
    string a;cin>>a;
    int m;cin>>m;
    string b,vd;cin>>b>>vd;
    for(int i=0;i<m;i++) {
        if(vd[i]=='V') {
            a=b[i]+a;
        }
        else a+=b[i];
    }

    cout << a << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
