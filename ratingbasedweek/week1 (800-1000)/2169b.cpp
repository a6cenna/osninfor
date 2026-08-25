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
    if(n==1) {
        cout << 1 << '\n';return;
    }
    bool ok=1;
    bool mark=0;
    for(int i=0;i<n;i++) {
        if(s[i]=='*') {
            if(i>0&&(s[i-1]=='>'||s[i-1]=='*')) {
                ok=0;
                break;
            }
            if(i<n-1&&(s[i+1]=='<'||s[i+1]=='*')) {
                ok=0;
                break;
            }
        }
        if(mark&&s[i]=='<') {
            ok=0;break;
        }
        if(s[i]=='>') mark=1;
    } 
    if(!ok) {
        cout << -1 << '\n';
        return;
    }
    
    int right=0, left=0;
    for(int i=0;i<n;i++) {
        if(s[i]=='*'||s[i]=='>') right++;
    }
    for(int i=n-1;i>=0;i--) {
        if(s[i]=='*'||s[i]=='<') left++;
    }
    
    cout << max(right, left) << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
