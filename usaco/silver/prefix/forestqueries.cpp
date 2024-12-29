#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n,q;cin>>n>>q;
    int a[n+1][n+1];
    for (int i = 1; i <= n; i++)
    {
        string s;cin>>s;
        for(int j=1;j<=n;j++) {
            a[i][j]=(s[j-1]=='*' ? 1 : 0);
        }
    }
    vector<vector<int>> prefixsum(n+1, vector<int>(n+1, 0));
    for (int i = 1; i <= n; i++)
    {
        for(int j=1;j<=n;j++) {
            prefixsum[i][j]=a[i][j]+prefixsum[i-1][j]+prefixsum[i][j-1]-prefixsum[i-1][j-1];
        }
    }
    while(q--) {
        int y1,x1,y2,x2;cin>>y1>>x1>>y2>>x2;
        cout << prefixsum[y2][x2]+prefixsum[y1-1][x1-1]-prefixsum[y1-1][x2]-prefixsum[y2][x1-1] << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
 