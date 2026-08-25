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
    string s,s1;cin>>s>>s1;
    map<int,int> mp;
    for(int i=0;i<s.length();i++) {
        mp[s[i]-'a']--;
    }
    for(int i=0;i<s1.length();i++) {
        mp[s1[i]-'a']++;
    }
    for(int i=0;i<27;i++) {
        if(mp[i]<0) {
            cout << "Impossible\n";
            return;
        }
    }
    int at=0;
    for(int i=0;i<27;i++) {
        if(mp[i]>0) {
            if(s[at]==i+'a') {
                while(s[at]-'a'<=i&&at<s.length()) {
                    cout << s[at];
                    at++;
                }
            }
            cout << string(mp[i], i+'a');
        }
        else if(s[at]==i+'a') {
            while(s[at]-'a'<=i&&at<s.length()) {
                cout << s[at];
                at++;
            }
        }
    }
    cout << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
