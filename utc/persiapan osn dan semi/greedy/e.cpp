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
#define int ll

void solve() {
    int k;cin>>k;
    vector<pii> kandang(k); // biaya, kapasitas
    for(int i=0;i<k;i++) cin>>kandang[i].sc;
    for(int i=0;i<k;i++) cin>>kandang[i].fs;
    sort(kandang.begin(), kandang.end());
    int n;cin>>n;
    int b[n];
    for(int i=0;i<n;i++) cin>>b[i];
    sort(b,b+n,greater<int>());
    int ans=0;
    int cur=0;
    for(int i=0;i<n;i++) {
        if(kandang[cur].sc==0) cur++;
        if(kandang[cur].sc>0) {
            ans+=b[i]*kandang[cur].fs;
            kandang[cur].sc--;
        }
    }

    cout << ans << '\n';
}

signed main() {
    war_without_reason

    solve();
}
