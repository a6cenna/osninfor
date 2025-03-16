#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    bool matrix[n][n];
    for(int i=0;i<n;i++) {
        string s;cin>>s;
        for(int j=0;j<n;j++) {
            if(s[j]=='X') matrix[i][j]=1;
            else matrix[i][j]=0;
        }
    }
    int ans=0;
    for(int i=1;i<n-1;i++) {
        for(int j=1;j<n-1;j++) {
            if(matrix[i][j]) { // inti
                if(matrix[i-1][j-1] && matrix[i+1][j+1] && matrix[i+1][j-1] && matrix[i-1][j+1]) {
                    ans++;
                }
            }
        }
    }

    cout << ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
