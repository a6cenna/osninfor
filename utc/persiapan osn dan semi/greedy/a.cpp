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
    vector<pii> v;
    for(int i=0;i<n;i++) {
        int x,y;cin>>x>>y;
        v.pb({y,x});
    }
    sort(v.begin(), v.end());
    int cur=0;
    int ans=0;
    for(int i=0;i<n;i++) {
        if(v[i].sc>=cur) {
            cur=v[i].fs;
            ans++;
        }
    }
    cout << ans << '\n';
}

int main() {
    war_without_reason

    solve();
}
