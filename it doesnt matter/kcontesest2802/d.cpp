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
    int n,k;cin>>n>>k;
    vector<pii> v;
    set<int> st;
    for(int i=1;i<=n;i++) {
        int x;cin>>x;
        st.insert(x);
        v.pb({x, i});
    }
    sort(v.begin(), v.end());
    while(k--) {
        int a,b;cin>>a>>b;
        if(!st.count(a)||!st.count(b)) {
            cout << "NO\n";
            continue;
        }
        int str=lower_bound(v.begin(), v.end(), pii{a, INT_MIN})-v.begin();
        int ed=upper_bound(v.begin(), v.end(), pii{b, INT_MAX})-v.begin()-1;
        if(v[str].sc<=v[ed].sc) cout << "YES\n";
        else cout << "NO\n";
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
