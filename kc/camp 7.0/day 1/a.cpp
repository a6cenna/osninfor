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
    int x,n;cin>>x>>n;
    set<int> st;
    for(int i=0;i<n;i++) {
        int x;cin>>x;
        st.insert(x);
    }
    int ans=INT_MAX;
    for(int i=0;i<=101;i++) {
        if(!st.count(i)) {
            ans=min(ans, abs(x-i));
        }
    }

    cout << (!st.count(x-ans)?x-ans:x+ans) << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
