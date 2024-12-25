#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("planting.in", "r", stdin);
    freopen("planting.out", "w", stdout);

    int n;cin>>n;
    vector<vector<int>> a(n+1);
    int maxadj=INT_MIN;
    for (int i = 0; i < n-1; i++)
    {
        int x,y;cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
        maxadj=max(maxadj, (int) max(a[x].size(), a[y].size()));
    }
    
    cout << maxadj+1;
}
