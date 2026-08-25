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
#define int ll

void solve() {
    int n;cin>>n;
    int b[n];
    int mx=0;
    int cnt=n;
    int sum=0;
    for(int i=0;i<n;i++) {
        cin>>b[i];
        mx=max(mx,b[i]);
        if(b[i]==0) cnt--;
        sum+=b[i];
    }
    cout << min({cnt, sum-n+1}) << '\n';
}


signed main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
