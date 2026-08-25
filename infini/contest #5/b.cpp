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
    int x,n;cin>>x>>n;
    int w[n];
    for(int i=0;i<n;i++) {
        cin>>w[i];
    }
    int q;cin>>q;
    set<int> st;
    int cur=x;
    while(q--) {
        int p;cin>>p;
        if(!st.count(p)) {
            cur+=w[p-1];
            st.insert(p);
        }
        else {
            cur-=w[p-1];
            st.erase(p);
        }
        cout << cur << '\n';
    }
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
