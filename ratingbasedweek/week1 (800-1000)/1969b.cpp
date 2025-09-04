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
    int n=s.length();
    // int last0pos=-1;
    // for(int i=0;i<n;i++) {
    //     if(s[i]=='0') last0pos=i;
    // }
    // if(last0pos==-1) cout << 0;
    // else {
    //     int zerol=0;
    //     for(int i=0;i<last0pos;i++) {
    //         if(s[i]=='0') zerol++;
    //     }
    //     int ans=0;
    //     for(int i=0;i<=last0pos;i++) {
    //         if(s[i]=='1') ans+=zerol;
    //         else zerol--;
    //     }
    //     cout << ans;
    // }
    ll zcnt=0;
    for(int i=0;i<n;i++) zcnt+=(s[i]=='0'?1:0);
    ll ans=0;
    bool isone=false;
    for(int i=0;i<n;i++) {
        if(s[i]=='1') {
            ans+=zcnt;
            isone=1;
        }
        else {
            if(isone) ans++;
            zcnt--;
        }

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
