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
    double n=3;
    double a=227,b=6.0;
    double sum=0;
    double y[4]={0,785,790,600};
    double m[4]={0, 95,86,68};
    for(int i=1;i<=n;i++) {
        sum+=pow(y[i]-(a+b*m[i]),2);
    }
    cout << sum/3.0 << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    solve();
}
