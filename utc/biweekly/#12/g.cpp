// war without reason

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
    vector<int> cnt(n+1,0);
    int x;
    for(int i=0;i<n;i++) {
        cin>>x;
        cnt[x]++;
    }
    int ans=0;
    for(int i=1;i<=n;i++) {
        if(cnt[i]>1) {
            ans+=((cnt[i]*(cnt[i]-1))/2)*(n-cnt[i]);
        }
    }
    cout << ans << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    solve();
}
