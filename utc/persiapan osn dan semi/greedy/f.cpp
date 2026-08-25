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

void solve() {
    while(true) {
        int n;cin>>n;
        if(n==0) break;
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i=0;i<n;i++) {
            int x;cin>>x;
            pq.push(x);
        }
        int ans=0;
        while(pq.size()>1) {
            int tmp1=pq.top();pq.pop();
            int tmp2=pq.top();pq.pop();
            pq.push(tmp1+tmp2);
            ans+=tmp1+tmp2;
        }

        cout << ans << '\n';
    }
}

signed main() {
    war_without_reason

    solve();
}
