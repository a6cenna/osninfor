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
    string s;cin>>s;
    int n=s.length();
    int empat=0;
    for(int i=0;i<n;i++) {
        if(s[i]=='4') {
            empat++;
        }
    }
    int suf[n+2];
    int pre[n+2];
    suf[n+1]=0;
    pre[0]=0;
    for(int i=n;i>=1;i--) {
        suf[i]=suf[i+1]+(s[i-1]=='2');
    } 
    for(int i=1;i<=n;i++) {
        pre[i]=pre[i-1]+(s[i-1]=='1'||s[i-1]=='3');
    }
    int ans=INT_MAX;
    for(int i=0;i<=n;i++) {
        ans=min(ans, empat+pre[i]+suf[i+1]);
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
