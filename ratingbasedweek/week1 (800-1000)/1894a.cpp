#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    string s;cin>>s;
    if(n%2==0) {
        int cnta=0,cntb=0;
        for(int i=0;i<n;i++) {
            if(s[i]=='A') cnta++;
            else cntb++;
        }
        if(cnta==cntb) {
            cout << s[n-1] << '\n';
        }
        else cout << s[n-1] << '\n';
        return;
    }
    cout << s[n-1] << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
