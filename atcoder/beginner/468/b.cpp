// war without reason

#include <bits/stdc++.h>
using namespace std;

#define war_without_reason ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back

void solve() {
    int m,d;cin>>m>>d;
    string s;cin>>s;
    for(int i=0;i<m;i++) {
        if(s[i]=='G') {
            for(int j=i-1;j>=i-d&&j>=0;j--) {
                if(s[j]!='G') s[j]='V';
            }
            for(int j=i+1;j<=i+d&&j<m;j++) {
                if(s[j]!='G') s[j]='V';
            }
        }
    }
    int ans=0;
    for(int i=0;i<m;i++) {
        if(s[i]=='.') ans++;
    }

    cout << ans << '\n';
}

int main() {
    war_without_reason

    solve();
}
