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

int toint(char c) {return c-'0';}

void solve() {
    string s;cin>>s;
    int ans=1;
    bool fs=true;
    int cut=0;
    for(int i=1;i<s.length();i++) {
        // if(toint(s[i])<toint(s[i-1])) {
        //     if(fs) {
        //         ans++;
        //         fs=false;
        //     }
        //     else if(i==s.length()-1&&)ans++;
        //     else ans+=2;
        // }
        if(s[i]!=s[i-1]){
            ans++;
            if(toint(s[i-1])==0) cut=1;
        }
    }
    cout << ans-cut << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
