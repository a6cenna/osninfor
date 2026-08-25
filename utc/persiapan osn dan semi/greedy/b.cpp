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

void solve(int c) {
    int n;cin>>n;
    string s;cin>>s;
    int ans=0;
    for(int i=0;i<n;i++) {
        if(s[i]=='#') continue;
        ans++;
        i+=3;
        while(i<n&&s[i]=='.') {
            ans++;
            i+=3;
        }
    }

    cout << "Case " << c << ": " << ans << '\n';
}

int main() {
    war_without_reason

    int t;
    cin >> t;
    int cur=1;
    while(t--) {
        solve(cur);
        cur++;
    }
}
