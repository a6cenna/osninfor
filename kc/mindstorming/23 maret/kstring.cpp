#include <bits/stdc++.h>

using namespace std;

void solve() {
    int k;cin>>k;
    string s;cin>>s;
    int c[26]={0};
    for(int i=0;i<s.length();i++) {
        c[s[i]-'a']++;
    }
    string ans="";
    for(int i=0;i<26;i++) {
        if(c[i]>0) {
            if(c[i]%k==0) {
                for(int j=0;j<c[i]/k;j++) {
                    ans+=(i+'a');
                }
            }
            else {
                cout << -1;
                return;
            }
        }
    }
    for(int i=0;i<k;i++) {
        cout << ans;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
