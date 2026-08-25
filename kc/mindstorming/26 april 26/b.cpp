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
#define int ll

void solve() {
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int cur=0;
    int cnt=0;
    priority_queue<int,vector<int>, greater<int>> pq;
    int ans=0;
    for(int i=0;i<n;i++) {
        if(cur+a[i]>=0) {
            cur+=a[i];
            cnt++;
            pq.push(a[i]);
        }
        else {
            cur+=a[i];
            cnt++;
            pq.push(a[i]);
            if(cur<0) {
                cur-=pq.top();
                pq.pop();
                cnt--;
            }
        }
        ans=max(ans,cnt);
    }
    cout << ans << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    solve();
}
