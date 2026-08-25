#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pii pair<int,int>
#define pb push_back

int N=1e6;

// vector<bool> prima(N+5,1);
// vector<int> nilai_prima;

void solve() {
    int n,p;cin>>n>>p;
    vector<vector<int>> v(n+1);
    for(int i=1;i<=n;i++) {
        int k;cin>>k;
        while(k--) {
            int x;cin>>x;
            v[i].pb(x);
        }
        sort(v[i].begin(), v[i].end());
    }
    int l=1,r=20000;
    int ans=-1;
    while(l<=r) {
        int mid=(l+r)/2;
        int tmp=0;
        int mn=1e9;
        bool ok=1;
        for(int k=1;k<=n;k++) {
            mn=1e9;
            int l=0;
            for(int r=v[k].size()-1;r>=0;r--) {
                if(l>=r) break;
                while(l+1<r&&v[k][l]+v[k][r]<mid) l++;
                if(v[k][l]+v[k][r]>=mid) mn=min(mn,v[k][l]+v[k][r]);

                // cout << v[k][i] << ' ' << *it << " dbg, mid: " << mid << '\n';
            }
            if(mn==1e9) {
                ok=0;
                break;
            }
            tmp+=mn;
        }

        // cout << tmp << ' ' << mid << " dbg\n";

        if(tmp<=p&&ok) {
            ans=mid;
            l=mid+1;
        }
        else r=mid-1;
    }

    cout << ans << '\n';
}

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    solve();
}

/*
3 150
2 40 20
4 10 20 30 40
3 20 40 10

3 150
2 40 20
2 30 10
2 10 20

3 100
2 40 20
4 10 20 30 40
3 20 40 10

3 20
4 2 5 5 3
5 6 3 4 1 8
3 5 1 7
*/
