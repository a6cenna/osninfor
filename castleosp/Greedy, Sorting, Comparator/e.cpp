// war without reason

#include <bits/stdc++.h>
using namespace std;

#define suffering_leaves_suffering_leaves ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back
#define ti3 tuple<int,int,int>
#define int ll

void solve() {
    int n;cin>>n;
    vector<ti3> v(n);
    int cur=0;
    for(auto& [a,b,i]:v) {
        cin>>a>>b;
        i=cur;
        cur++;
    }
    sort(v.begin(), v.end(), [](ti3& v1, ti3& v2) {
        auto [a1,b1,i1] = v1;
        auto [a2,b2,i2] = v2;
        if(a1*(a2+b2)==a2*(a1+b1)) return i1<i2;
        return (a1*(a2+b2)>a2*(a1+b1));
    });
    for(int i=0;i<n;i++) {
        auto [a,b,idx]=v[i];
        cout << idx+1 << '\n';
    }
}

signed main() {
    suffering_leaves_suffering_leaves

    solve();
}
