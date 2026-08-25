#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back

void solve() {
    string s;cin>>s;
    int n=s.length();
    vector<string> osn;
    osn.pb("OSN");
    osn.pb("ONS");
    osn.pb("NSO");
    osn.pb("NOS");
    osn.pb("SON");
    osn.pb("SNO");

    int ans=-1;
    for(int i=0;i<6;i++) {
        string acuan=osn[i];
        int cur=0;
        int tmp=0;
        for(int j=0;j<n;j++) {
            if(s[j]==acuan[cur%3]) {
                tmp++;cur++;
            }
        }
        ans=max(ans,tmp);
    }
    
    cout << (ans>2?ans:-1) << '\n';
}

signed main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);

    solve();
}
