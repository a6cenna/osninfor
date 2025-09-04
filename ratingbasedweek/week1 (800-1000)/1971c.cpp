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
    int a,b,c,d;cin>>a>>b>>c>>d;
    string s;
    for(int i=1;i<=12;i++) {
        if(i==a||i==b) s+="1";
        if(i==c||i==d) s+="0";
    }
    cout << (s=="1010"||s=="0101"?"YES":"NO") << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
