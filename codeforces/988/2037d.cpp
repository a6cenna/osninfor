#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n,m,l;cin>>n>>m>>l;

    pair<int,int> h[n],p[m];
    for(int i=0;i<n;i++) {
        cin>>h[i].first>>h[i].second;
    } 
    for(int i=0;i<m;i++) {
        cin>>p[i].first>>p[i].second;
    } 
    priority_queue<int> queue;
    int ke=0, curr=1, ans=0;
    for(int i=0;i<n;i++) {
        while (ke<m && p[ke].first < h[i].first){
            queue.push(p[ke++].second);
        }
        while(!queue.empty() && curr <= h[i].second-h[i].first+1) {
            curr+=queue.top();
            queue.pop();
            ans++;
        }
        if(curr <= h[i].second-h[i].first+1) {
            cout << -1 << '\n';
            return;
        }
    }

    cout << ans << '\n';
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
