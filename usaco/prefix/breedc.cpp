#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("bcount.in", "r", stdin);
    freopen("bcount.out", "w", stdout);

    int n,q;cin>>n>>q;
    vector<vector<int>> a(n+1, vector<int>(4, 0));
    for(int i=1;i<=n;i++) {
        int x;cin>>x;
        for(int j=1;j<=3;j++) {
            a[i][j]+=a[i-1][j];
        }
        a[i][x]++;
    }
    while(q--) {
        int l,r;cin>>l>>r;
        cout << a[r][1]-a[l-1][1] << " " << a[r][2]-a[l-1][2] << " " << a[r][3]-a[l-1][3] << '\n';
    }
}
