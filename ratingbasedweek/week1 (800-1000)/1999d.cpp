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
    int cnt=0;
    int freq[26];
    memset(freq, 0, sizeof(freq));
    for(int i=0;i<s.length();i++) {
        if(s[i]=='?') cnt++;
        else freq[s[i]-'a']++;
    }
    // for(int i=0;i<s1.length();i++) {
    //     if(freq[s1[i]-'a']>0) {
    //         freq[s1[i]-'a']--;
    //         s1.substr(i, 1);
    //         i--;
    //     }
    // }
    
    if(cnt<s1.length()) {
        cout << "NO" << '\n';
        return;
    }
    while(cnt>s1.length()) {
        s1+='a';
    }
    cout << "YES\n";
    int point=0;
    string ans;
    for(int i=0;i<s.length();i++) {
        if(s[i]!='?') ans+=s[i];
        else {
            ans+=s1[point];
            point++;
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
