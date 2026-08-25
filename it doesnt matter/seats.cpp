// in the pool

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
    int n;cin>>n;
    string s;cin>>s;
    int ans=0;
    for(int i=0;i<n;i++) {
        if(s[i]=='1') {
            ans++;
            if(i+1<n&&s[i+1]=='0')s[i+1]='2';
            if(i-1>=0&&s[i-1]=='0')s[i-1]='2';
        }
    }
    for(int i=0;i<n;i++) {
        if(s[i]=='0') {
            ans++;
            if(i+1<n&&s[i+1]=='0') {
                s[i+1]='1';
                if(i+2<n&&s[i+2]=='0') s[i+2]='2';
            }
            s[i]='1';
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
