#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    string s;cin>>s;
    int q;cin>>q;
    
    int change[26];
    for(int i=0;i<26;i++) {change[i]=i;}
    char c,d;
    for(int i=0;i<q;i++) {
        cin>>c>>d;
        int dari=c-'a';
        int ke=d-'a';
        for(int j=0;j<26;j++) {
            if(change[j]==dari) {
                change[j]=ke;
            }
        }
    }
    char a;
    for(int i=0;i<n;i++) {
        a=change[s[i]-'a']+'a';
        cout << a;
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
