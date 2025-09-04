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
    int n;
    char c;
    cin>>n>>c;
    string s;cin>>s;
    n*=2;
    s+=s;
    vector<int> suff(n+2, -1);
    for(int i=n;i>=1;i--) {
        suff[i]=suff[i+1];
        if(s[i-1]=='g')suff[i]=i;
    }
    int ans=0;
    for(int i=0;i<n;i++) {
        if(s[i]==c) {
            ans=max(ans, suff[i+1]-i);
        }
    }
    cout << ans-1 << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
