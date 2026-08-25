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

void solve() {
    int n,m;cin>>n>>m;
    vector<int> val(m+1,-1);
    int c,s;
    while(n--) {
        cin>>c>>s;
        val[c]=max(val[c],s);
    }
    for(int i=1;i<=m;i++) {
        cout << val[i] << ' ';
    }
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
