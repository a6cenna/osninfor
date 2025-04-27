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
    int n;cin>>n;
    string s;cin>>s;
    int ans=n;
    int can1=0;
    int can2=0;
    int adanol=0;
    int trans1=0;
    int trans0=0;
    if(s[0]=='1')ans++;
    for(int i=0;i<n-1;i++) {
        if(s[i]!=s[i+1]) {
            ans++;
            if(s[i]=='1') {
                if(trans1)can2=1;
                else trans1=1;
            }
            else {
                if(trans0)can2=1;
                else trans0=1;
            }
        }
        if((s[i]!=s[i+1] && s[i]==s[i+2] && i+2<n)) can1=1;
    }
    for(auto c:s){
        if(c=='0')adanol=1;
    }
    if(s[0]=='1'&&trans0) can2=1;
    if(can2) ans-=2;
    else if(ans-n>1) ans--;
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
