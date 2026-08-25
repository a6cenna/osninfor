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
    string s;cin>>s;
    map<int,int> mp;
    for(auto x:s) {
        mp[x-'0']++;
    }
    string ans="";
    for(int i=0;i<10;i++) {
        for(int j=9-i;j<=9;j++) {
            if(mp[j]>0) {
                ans+=(j+'0');
                mp[j]--;
                break;
            }
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
