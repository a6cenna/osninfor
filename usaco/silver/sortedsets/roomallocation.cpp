#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    vector<pair<pair<int,int>,int>> v(n);
    int ans[n];
    for(int i=0;i<n;i++) {
        cin>>v[i].first.first>>v[i].first.second;
        v[i].second=i;
    }
    sort(v.begin(), v.end());
    priority_queue<pair<int,int>> pq;
    int lastroom=0;
    for(int i=0;i<n;i++) {
        if(pq.empty() || -pq.top().first >= v[i].first.first) {
            lastroom++;
            pq.push(make_pair(-v[i].first.second, lastroom));
            ans[v[i].second]=lastroom;
        }
        else {
            pair<int,int> minim=pq.top();
            pq.pop();
            pq.push(make_pair(-v[i].first.second, minim.second));
            ans[v[i].second]=minim.second;
        }
    }

    cout << lastroom << '\n';
    for(int i=0;i<n;i++) {
        cout << ans[i] << ' ';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
