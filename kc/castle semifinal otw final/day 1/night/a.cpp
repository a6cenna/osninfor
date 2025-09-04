// author: sofwant || a6cenna

#include <bits/stdc++.h>
using namespace std;

#define suffering_leaves_suffering_leaves ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define int ll
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back

void solve() {
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int ans=1;
    multiset<int> st;
    for(int i=0;i<ceil((double)n/k);i++) {
        for(int j=i*k;j<k*(i+1)&&j<n;j++) {
            st.insert(a[j]);
        }
        ans+=*st.rbegin()+1;
        st.clear();
    }

    cout << ans << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    solve();
}
