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
    int n;cin>>n;
    map<string,int> mp;
    while(n--) {
        string s;cin>>s;
        if(!mp.count(s)) {
            cout << "OK\n";
            mp[s]++;
            continue;
        }
        cout << s << mp[s] << '\n';
        mp[s]++;
    }

}

int main() {
    war_without_reason

    solve();
}
