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
    string s;getline(cin,s);
    cout << s[0];
    for(int i=1;i<s.length();i++) {
        if(s[i-1]==' ') {
            cout << s[i];
        }
    }
    cout << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;
    cin.ignore();

    while(t--) {
        solve();
    }
}
