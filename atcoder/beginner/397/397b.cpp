// author: sofwant || a6cenna
// created at 29/03/2025
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
    int ans=0;
    int shift=0;
    for(int i=0;i<s.length();i++) {
        if((i+shift)%2==0) {
            if(s[i]!='i') {
                ans++;
                shift++;
            }
        }
        else if((i+shift)%2!=0){
            if(s[i]!='o') {
                ans++;
                shift++;
            }    
        }
    }
    if((s.length()+ans)%2!=0) ans++;
    cout << ans << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
