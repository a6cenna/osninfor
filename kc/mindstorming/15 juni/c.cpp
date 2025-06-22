// author: sofwant || a6cenna

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
    int n;cin>>n;
    pii cow[n];
    for(int i=0;i<n;i++) cin>>cow[i].sc>>cow[i].fs;
    sort(cow, cow+n);

    priority_queue<int, vector<int>, greater<int>> pq;

    for(int i=0;i<n;i++) {
        pq.push(cow[i].sc);

        if(pq.size()>cow[i].fs) pq.pop();
    }

    int ans=0;
    while(!pq.empty()) {
        ans+=pq.top();
        pq.pop();
    }

    cout << ans << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
