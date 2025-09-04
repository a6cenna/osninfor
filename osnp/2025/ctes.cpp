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
    int n;cin>>n;
    int a[n];
    int cnt=0;
    for(int i=0;i<n;i++)cin>>a[i];
    int mx=a[0];
    int mn=a[0];
    for(int i=0;i<n;i++) {
        cnt+=i+a[i];
        if(i!=0) {
            mx=max(mx+1, a[i]);
            mn=min(mn+1, a[i]);
        }
        cout << mn << ' ' << mx << ' ';
        cout << fixed << setprecision(4) << (double)cnt/(i+1) << '\n';
    }   
}

signed main() {
    suffering_leaves_suffering_leaves

    solve();
}
