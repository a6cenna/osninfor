#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("mountains.in", "r", stdin);
    freopen("mountains.out", "w", stdout);
    int n;cin>>n;

    pair<int,int> p[n];
    for(int i=0;i<n;i++) {
        int x,y;
        cin>> x >> y;
        p[i].first=x-y;p[i].second=x+y;
    }
    sort(p, p+n, [](pair<int,int> &a, pair<int,int> &b) {
        if(a.first==b.first) return a.second > b.second;
        return a.first < b.first;
    });

    // we find first element then we find the most right
    // after that every element in beetween doest count

    int most_right=0;
    int ans=0;
    for(int i=0;i<n;i++) {
        if(p[i].second > most_right) {
            ans++;
            most_right=p[i].second;
        }
    }

    cout << ans;
}
