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
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int cnt[3];
    memset(cnt, 0, sizeof(cnt));
    for(int i=0;i<n;i++) {
        cnt[a[i]]++;
    }
    int ans=cnt[0];
    int tmp=min(cnt[1],cnt[2]);
    ans+=tmp;
    cnt[1]-=tmp;
    cnt[2]-=tmp;
    ans+=cnt[2]/3;
    ans+=cnt[1]/3;
    
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
