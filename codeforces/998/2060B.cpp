#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n,m;cin>>n>>m;
    int cow[n][m];
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin>>cow[i][j];
        }
    }
    // the first one should be 0 then 1 then 2 then 3 
    // how
    // iterate from all of it?
    // we first determine wether possible or not then just find the right order
    for (int i = 0; i < n; i++)
    {
        sort(cow[i], cow[i]+m);
    }
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[cow[i][0]]=i+1; // misal 0 berarti 0 tu ada di cow yang i
    }
    // check one by one? try
    int possible = true;
    int acuan=cow[0][1]-cow[0][0];
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<m-1;j++) {
            if(cow[i][j+1]-cow[i][j]!=acuan) {
                cout << -1 << '\n';
                return;
            }
        }
    }
    if(possible) {
        for(int i=0;i<n;i++) {
            cout << mp[i] << " ";
        }
        cout << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
