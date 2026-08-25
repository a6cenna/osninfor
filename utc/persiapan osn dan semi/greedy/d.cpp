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
    int n,m;cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    vector<pii> v;
    for(int i=0;i<m;i++) {
        int x,y;cin>>x>>y;
        v.pb({x,y});
    }
    sort(a,a+n);
    sort(v.begin(), v.end(), [](pii v1, pii v2) {
        if(v1.fs==v2.fs) return v1.sc<v2.sc;
        return v1.fs < v2.fs;
    });
    int ans=0;
    for(int i=0;i<n;i++) {
        int kandidat=-1;
        int akhir=INT_MAX;
        int j=0;
        for(auto p:v) {
            if(p.fs>a[i]) break;
            if(p.sc>=a[i]&&akhir>p.sc) {
                akhir=p.sc;
                kandidat=j;
            }
            j++;
        }
        if(kandidat!=-1) {
            ans++;
            v.erase(v.begin()+kandidat);
        }
    }

    cout << ans << '\n';
}

int main() {
    war_without_reason

    solve();
}
