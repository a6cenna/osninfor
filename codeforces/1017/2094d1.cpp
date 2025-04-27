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
    string p,s;cin>>p>>s;
    int n=p.size(),m=s.size();
    
    int l=0;
    int r=0;
    bool yes=true;
    
    while(l<n&&r<m) {
        if(p[l]!=s[r]) {
            yes=false;
            break;
        }
        int curr=p[l];
        int freqp=0;
        while(l<n&&p[l]==curr){
            freqp++;
            l++;
        }
        int freqs=0;
        while(r<m&&s[r]==curr){
            freqs++;
            r++;
        }
        if(freqp>freqs||freqp*2<freqs) {
            yes=false;
            break;
        }
    }
    if(yes&&l==n&&r==m) {
        cout << "YES\n";
    }
    else cout << "NO\n";
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
