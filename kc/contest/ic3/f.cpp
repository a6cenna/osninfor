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
    int n,p,k;cin>>n>>p>>k;
    string s;cin>>s;
    int x,y;cin>>x>>y;
    vector<int> suf(n,0);
    for(int i=n-1;i>=0;i--) {
        if(i+k<n)suf[i]=suf[i+k];
        if(s[i]=='0') suf[i]+=1;
    }
    int ans=INT_MAX;
    for(int i=0;p+i-1<n;i++) {
        ans=min(ans,i*y+x*suf[p+i-1]);
    }
    cout << ans << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
