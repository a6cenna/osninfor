#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n,m;cin>>n>>m;
    vector<vector<int>> a(m, vector<int>(26, 0));
    vector<vector<int>> b(m, vector<int>(26, 0));
    for (int i = 0; i < n; i++)
    {
        string c;cin>>c;
        for (int j = 0; j < m; j++)
        {
            a[j][c[j]-'A']++;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        string c;cin>>c;
        for (int j = 0; j < m; j++)
        {
            b[j][c[j]-'A']++;
        }
    }
    int ans=0;
    for (int i = 0; i < m; i++)
    {
        if((b[i][0]!=0 && a[i][0]!=0) || (b[i][6]!=0 && a[i][6]!=0) || (b[i][2]!=0 && a[i][2]!=0) || (b[i][19]!=0 && a[i][19]!=0))  {
            continue;
        }
        else {
            ans++;
        }
    }
    cout << ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("cownomics.in", "r", stdin);
    freopen("cownomics.out", "w", stdout);

    solve();
}
