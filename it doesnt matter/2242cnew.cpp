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
    int n,k;cin>>n>>k;
    int cnt[n+1];
    memset(cnt,0,sizeof(cnt));
    for(int i=0;i<n;i++) {
        int x;cin>>x;
        cnt[x]++;
    }
    map<int,int> freq;
    for(int i=1;i<=n;i++) {
        if(cnt[i]>0) freq[cnt[i]]++;
    }
    int ans=0;
    for(auto [x,y]:freq) {
        int cur=0;
        int div=0;
        for(auto [xx,yy]:freq) {
            cur+=max((xx-(x-1))*yy, 0LL);
            if(xx-(x-1)>0) div+=yy;
        }

        if(k>=cur&&(k-cur)%div==0) ans++;
    }

    cout << ans << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
