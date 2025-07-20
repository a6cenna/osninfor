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
    int n,k;cin>>n>>k;
    set<int> st;
    for(int i=0;i<n;i++) {
        int x;cin>>x;
        st.insert(x);
    }
    int ans=k;
    for(int i=0;i<k;i++) {
        if(st.count(i)) continue;
        else {
            ans=i;
            break;
        }
    }
    cout << ans;
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
