// in the pool

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
    int ok=false;
    for(int i=0;i<4;i++) {
        if(a<b&&a<c&&c<d&&b<d) ok=true;
        int tmp=a;
        a=c;
        c=d;
        d=b;
        b=tmp;
    }
    cout << (ok?"YES":"NO") << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
