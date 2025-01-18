#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("pairup.in", "r", stdin);
    freopen("pairup.out", "w", stdout);
    int n;cin>>n;
    pair<int,int> xy[n];
    for(int i=0;i<n;i++) {
        cin>>xy[i].first>>xy[i].second;
    }
    sort(xy, xy+n, [](pair<int,int> &a, pair<int,int> &b) {
        return a.second < b.second;
    });

    int l=0, r=n-1;
    int ans=INT_MIN;
    while(l<=r) {
        // while(xy[l].first!=0 && xy[r].first!=0) {
        //     ans=max(ans, xy[l].second + xy[r].second);
        //     xy[l].first--;
        //     xy[r].first--;
        // }

        int need=min(xy[l].first, xy[r].first);
        if(l==r) need/=2;
        ans=max(ans, xy[l].second+xy[r].second);
        xy[l].first-=need;
        xy[r].first-=need;

        if(xy[l].first==0) {
            l++;
        }
        if(xy[r].first==0) {
            r--;
        }
    }

    cout << ans;
}
