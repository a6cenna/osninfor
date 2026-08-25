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
    int h,w,n;cin>>h>>w>>n;
    int grid[h][w];
    for(int i=0;i<h;i++) {
        for(int j=0;j<w;j++) {
            cin>>grid[i][j];
        }
    }
    set<int> st;
    for(int i=0;i<n;i++) {
        int x;cin>>x;
        st.insert(x);
    }
    int mx=INT_MIN;
    for(int i=0;i<h;i++) {
        int cnt=0;
        for(int j=0;j<w;j++) {
            if(st.count(grid[i][j])) cnt++;
        }
        mx=max(mx,cnt);
    }
    cout << mx << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
