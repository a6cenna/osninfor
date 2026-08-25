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
    int n,k;cin>>n>>k;
    int a[n];
    int cnt1=0,cnt2=0;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        if(a[i]==1)cnt1++;
        else cnt2++;
    }
    int ans=min(cnt1,cnt2);
    map<pii,int> mp;
    for(int i=0;i<n;i+=k) {
        for(int j=i;j<i+k;j++) {
            mp[{j-i,a[j]}]++;
        }
    }
    int cur=0;
    for(int i=0;i<k;i++) {
        cur+=min(mp[{i,1}],mp[{i,2}]);
    }
    ans=min(ans,cur);
    cout << ans << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
