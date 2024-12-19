#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    
    vector<vector<int>> c(n + 1, vector<int>(b + 1, 0));
    c[0][0]=1;
    
    for(int i=1; i<=n; i++) {
        c[i][0]=1;
        for(int j=1;j<=b&&j<=i;j++) {
            c[i][j]=((c[i-1][j]% MOD)+(c[i-1][j-1])%MOD) % MOD;
        }
    }
    int ans=0;
    for(int i=a;i<=b;i++) {
        ans=((c[n][i]% MOD)+ans)%MOD;
    }
    cout << ans << endl;
}
