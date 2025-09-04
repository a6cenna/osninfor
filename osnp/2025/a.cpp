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
    string s;cin>>s;
    bool O=false,S=false,N=false;
    int n=s.length();
    int suff[n+2];
    memset(suff, 0, sizeof(suff));
    for(int i=n;i>=1;i--) {
        suff[i]=suff[i+1];
        suff[i]+=(s[i-1]=='P');
    }
    int ans=0;
    int cnt=0;
    for(int i=0;i<n;i++) {
        if(s[i]=='O') O=true;
        if(s[i]=='S') S=true;
        if(s[i]=='N') N=true;
        if(s[i]=='O'||s[i]=='S'||s[i]=='N') cnt++;
        if(O&&S&&N&&suff[i+1]!=0) {
            ans=max(ans, cnt+suff[i+1]);
        }
    }
    if(ans==0) {
        cout << -1 << '\n';
        return;
    }
    cout << ans << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
