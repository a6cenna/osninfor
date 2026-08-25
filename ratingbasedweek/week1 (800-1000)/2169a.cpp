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
    int n,a;cin>>n>>a;
    int v[n];
    int cnt=0;
    int real=0;
    for(int i=0;i<n;i++) {
        cin>>v[i];
        if(v[i]>a) cnt++;
        if(v[i]!=a)real++;
    }
    if(2*cnt>=real) {
        cout << a+1 <<'\n';
    }
    else {
        cout << max(a-1,0) << '\n';
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
