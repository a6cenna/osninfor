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
    int n,s;cin>>n>>s;
    int x[n];
    for(int i=0;i<n;i++)cin>>x[i];
    if(n==1) {
        cout << abs(x[0]-s) << '\n';
        return;
    }
    int left=x[0],r=x[n-1];
    if(left>s)left=s;
    if(r<s)r=s;
    int mn=min(abs(left-s), abs(r-s));
    int mx=max(abs(left-s), abs(r-s));
    cout << mn*2+mx << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
