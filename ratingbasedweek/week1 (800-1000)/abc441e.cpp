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
#define int ll

void solve() {
    int n;cin>>n;
    string s;cin>>s;
    int cur=n;
    vector<int> cnt(2*n+1, 0);
    int ans=0;
    int sum=0;
    cnt[cur]++;
    for(auto c:s) {
        if(c=='A') {
            sum+=cnt[cur++];
        }
        if(c=='B') {
            sum-=cnt[--cur];
        }
        cnt[cur]++;
        ans+=sum;
    }
    cout << ans << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    solve();
}
