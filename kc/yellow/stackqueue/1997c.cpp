// author: sofwant || a6cenna
// created at 30/03/2025
// suffering leaves suffering leaves.

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
    string s;cin>>s;
    stack<int> st;
    st.push(0);
    int ans=0;
    for(int i=1;i<n;i++){
        if((s[i]=='_'||s[i]==')')&&!st.empty()) {
            ans+=i-st.top();
            st.pop();
        }
        else st.push(i);
    }

    cout << ans << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
