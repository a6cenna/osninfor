#include <bits/stdc++.h>

using namespace std;

void solve() {
    int q;cin>>q;
    long long counta=0, countb=0;
    counta=1;
    countb=1;
    int notAa=0;
    int notAb=0;
    while(q--) {
        int d,k;cin>>d>>k;
        string s;cin>>s;
        
        if(d==1) {
            for(int i=0;i<s.length();i++) {
                if(s[i]!='a') notAa=1;
                else counta+=k;
            }
        }
        else {
            for(int i=0;i<s.length();i++) {
                if(s[i]!='a') notAb=1;
                else countb+=k;
            }
        }
        if(notAb) {
            // bisa langsung ditaruh dipaling depan
            cout << "YES" << '\n';
        }
        else if(counta<countb && !notAa) {
            cout << "YES" << '\n';
        }
        else {
            cout << "NO" << '\n';
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
