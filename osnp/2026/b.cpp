#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pii pair<int,int>
#define pb push_back

void solve() {
    int n,m;cin>>n>>m;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end(),greater<int>());
    map<int,int> mp;
    int ans=-1;
    for(int i=0;i<n;i++) {
        int pasangan=m-(a[i]%m);
        if(mp.count(pasangan)!=0) {
            ans=max(ans,a[i]+mp[pasangan]);
        }
        if((a[i]*2)%m==0) {
            ans=max(ans, a[i]*2);
        }
        if(!mp.count(a[i]%m)) {
            // cout << a[i]%m << '\n';
            mp[a[i]%m]=a[i];
        }
    }

    cout << ans << '\n';
}

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    solve();
}

/*
5 4
2 4 1 3 11

5 4
2 4 1 3 10

5 4 
3 3 7 7 11

14 10
9 12 17 24 33 44 57 72 89 108 129 152 177 204

3 4 
2 4 6
*/