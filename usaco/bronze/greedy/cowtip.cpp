#include <bits/stdc++.h>

using namespace std;

vector<vector<bool>> cow;

void flip(int row, int col) {
    for (int i = 0; i <= row; i++) {
        for (int j = 0; j <= col; j++) {
            cow[i][j] = !cow[i][j];
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("cowtip.in", "r", stdin);
    freopen("cowtip.out", "w", stdout);

    int n;cin>>n;
    cow.resize(n, vector<bool>(n));

    // i = row, j= col
    for (int i = 0; i < n; i++)
    {
        string s;cin>>s;
        for(int j=0;j<n;j++) {
            cow[i][j]=s[j]-'0';
        }
    }

    int ans=0;
    for (int i = n-1; i >= 0; i--)
    {
        for(int j=n-1;j>=0;j--) {
            if(cow[i][j]) {
                flip(i,j);
                ans++;
            }
        }
    }

    cout << ans;
}
