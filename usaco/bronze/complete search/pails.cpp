#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("pails.in", "r", stdin);
    freopen("pails.out", "w", stdout);

    int x,y,m;cin>>x>>y>>m;

    bool dp[m+1]={false};
    dp[0]=true;
    for(int i=0;i<=m;i++) {
        if(dp[i]==true) {
            if(i+x<=m) {
                dp[i+x]=true;
            }
            if(i+y<=m) {
                dp[i+y]=true;
            }
        }
    }

    int maxi=0;

    for (size_t i = m; i > 0; i--)
    {
        if(dp[i]==true) {
            maxi=i;
            break;
        }
    }
    cout << maxi;
}
