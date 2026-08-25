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

const int N=1e5+5, INF=LLONG_MAX/2, MAXLOG=19;

vector<int> pref(N+5), MSB(N+5);
vector<vector<int>> spt(MAXLOG+5, vector<int>(N+5));

int query(int l, int r) {
    int k=MSB[r-l+1];

    return min(spt[k][l], spt[k][r-(1<<k)+1]);
}

void solve() {
    int n;cin>>n;
    vector<int> h(n+1),p(n+1);
    int kos=0;
    for(int i=1;i<=n;i++) cin>>h[i];
    for(int i=1;i<=n;i++) {
        cin>>p[i];
        if(p[i]==0) kos++;
    }
    MSB[1]=0;
    for(int i=2;i<=N;i++) MSB[i]=MSB[i/2]+1;
    spt[0][0]=0;
    for(int i=1;i<=n;i++) {
        pref[i]=pref[i-1]+(h[i]-p[i]);
        spt[0][i]=pref[i];
    }
    for(int k=1,len=2;len<=n;k++,len*=2) {
        for(int i=0;i+len-1<=n;i++) {
            spt[k][i]=min(spt[k-1][i], spt[k-1][i+len/2]);
        }
    }

    int ans=-INF;
    for(int r=1;r<=n;r++) {
        ans=max(ans, pref[r]-query(max(r-kos,0LL),r-1));
    }

    cout << ans << '\n';
}

signed main() {
    war_without_reason

    solve();
}
