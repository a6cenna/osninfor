// author: sofwant || a6cenna
// created at 24/03/2025
// suffering leaves suffering leaves.

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

    string ans="";

    for(int i=0;i<s.length();i++) {
        int best = s[i]-'0', last=i;
        for(int j=i;j<min(i+10, (int)s.length());j++) {
            if(s[j]-'0'-j+i>best) {
                best=s[j]-'0'-j+i;
                last=j;
            }
        }
        // proses penukaran
        while(last>i) {
            swap(s[last], s[last-1]);
            last--;
        }
        ans+=(best+'0');
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
