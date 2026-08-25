#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define pii pair<int,int> 
#define pb push_back
#define fs first
#define sc second

void solve() {
    int n,k;cin>>n>>k;
    vector<int> p(n);
    for(int i=0;i<n;i++) cin>>p[i];
    set<vector<int>> st;
    for(int i=k-1;i<n;i++) {
        vector<int> v=p;
        sort(v.begin()+(i-k+1), v.begin()+i+1);

        // for(auto x:v) {
        //     cout << x << ' ';
        // }
        // cout << '\n';
        st.insert(v);
    }

    cout << st.size() << '\n';
}

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    solve();
}
