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
    int n,m,a,b;cin>>n>>m>>a>>b;
    cout << min({a*n,((int)floor(n/m)+1)*b,(n/m)*b+(n-m*(n/m))*a});
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
