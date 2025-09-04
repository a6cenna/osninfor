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
    if(s.length()%2!=0) {
        cout << 0 << '\n';
        return;
    }
    char cur=s[0];
    int can=true;
    for(int i=1;i<s.length();i++) {
        if (s[i]!=cur) can=false;
    }
    if(!can) {
        cout << 0 << '\n';
        return;
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
