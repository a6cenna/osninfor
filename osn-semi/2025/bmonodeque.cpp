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

const int INF=LLONG_MAX/2;

void solve() {
    int n;cin>>n;
    vector<int> h(n+1),p(n+1);
    for(int i=1;i<=n;i++) cin>>h[i];
    int kos=0;
    for(int i=1;i<=n;i++) {
        cin>>p[i];
        if(p[i]==0) kos++;
    }
    vector<int> pref(n+1, 0);
    for(int i=1;i<=n;i++) {
        pref[i]=pref[i-1]+(h[i]-p[i]);
    }
    deque<int> dq;
    dq.pb(0);
    int ans=-INF;
    for(int r=1;r<=n;r++) {
        while(dq.front()<r-kos) dq.pop_front();
        ans=max(ans,pref[r]-pref[dq.front()]);
        while(!dq.empty()&&pref[dq.back()]>=pref[r]) dq.pop_back();
        dq.pb(r);
    }

    cout << ans << '\n';
}

signed main() {
    war_without_reason

    solve();
}
