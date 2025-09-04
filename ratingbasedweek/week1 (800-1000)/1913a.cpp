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
    if(s[0]==0) {
        cout << 0 << ' ' << s.substr(1, n-1) << '\n';
        return;
    }
    int a=stoi(s.substr(0, n/2));
    int b=stoi(s.substr(n/2, n/2));
    for(int i=(n+1)/2-1;i>=1;i--) {
        if(s[i]!='0') {
            cout << s.substr(0, i) << ' ' << s.substr(i, n) << '\n';
            return; 
        } 
    }
    if(n%2==0&&a<b) {
        cout << a << ' ' << b << '\n';
        return;
    }
    else cout << -1 << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
