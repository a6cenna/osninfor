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
#define ti3 tuple<int,int,int>

void solve() {
    int n;cin>>n;
    ti3 ab[n];
    for(int i=0;i<n;i++) {
        int a,b;cin>>a>>b;
        ab[i]={i+1,a,b};
    }
    sort(ab, ab+n, [&](ti3 a, ti3 b) {
        auto [idxa, aa, ba]=a;
        auto [idxb, ab, bb]=b;
        if(aa*(ab+bb)==ab*(aa+ba)) return idxa<idxb;
        return aa*(ab+bb)>ab*(aa+ba);
    });
    for(int i=0;i<n;i++) {
        auto [idx,a,b]=ab[i];
        cout << idx << ' ';
    }
    cout << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    solve();
}
