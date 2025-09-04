// author: sofwant || a6cenna

#include <bits/stdc++.h>
using namespace std;

#define suffering_leaves_suffering_leaves ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define int ll
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back

void solve() {
    int n,m;cin>>n>>m;
    pii a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i].fs>>a[i].sc;
    }
    sort(a,a+n);
    int ans=0;
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i=0;i<n;i++) {
        while(!pq.empty()&&pq.top()+m<a[i].fs) pq.pop();
        if(!pq.empty()&&pq.top()<=a[i].fs) {
            pq.pop();
            ans++;
        }
        pq.push(a[i].fs+a[i].sc);
    }
    cout << ans << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    solve();
}
