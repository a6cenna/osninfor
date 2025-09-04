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
    map<char,int> mp;
    for(int i=0;i<n;i++) {
        mp[s[i]]++;
    }
    for(int i=0;i<mp['T'];i++) cout << 'T';
    for(int i=0;i<mp['F'];i++) cout << 'F';
    for(int i=0;i<mp['N'];i++) cout << 'N';
    for(int i=0;i<n;i++) {
        if(s[i]!='T'&&s[i]!='F'&&s[i]!='N') cout << s[i];
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
