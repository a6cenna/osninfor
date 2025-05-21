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
    int a,b,c;cin>>a>>b>>c;
    bool can=true;
    if(b-a>c-b) can=false;
    c-=(b-a);
    a=b;
    if((c-b)%3!=0) can=false;
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
