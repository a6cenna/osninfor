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
    for(int i=1;i<=8;i++) {
        if(i==s[1]-'0') continue;
        cout << s[0] << i << '\n';
    }
    string abcd="abcdefgh";
    for(int i=0;i<8;i++) {
        if(abcd[i]==s[0]) continue;
        cout << abcd[i] << s[1] << '\n'; 
    }
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
