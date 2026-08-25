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
    int n;cin>>n;
    int x,y;cin>>x>>y;
    set<pii> st;
    for(int i=0;i<n;i++) {
        int xi,yi;cin>>xi>>yi;
        xi-=x;
        yi-=y;
        int g=gcd(xi,yi);
        xi/=g;
        yi/=g;
        if(yi<0||(yi==0&&xi<0)) xi=-xi,yi=-yi;
        st.insert({xi,yi});
    }
    cout << st.size() << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
