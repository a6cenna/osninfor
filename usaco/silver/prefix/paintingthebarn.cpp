#include <bits/stdc++.h>

using namespace std;

int maxn=1e3;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("paintbarn.in", "r", stdin);
    freopen("paintbarn.out", "w", stdout);

    int n,k;cin>>n>>k;
    vector<vector<int>> prefixsum(maxn+2, vector<int>(maxn+2, 0));
 
    while(n--) {
        int x1,y1,x2,y2;cin>>x1>>y1>>x2>>y2;
        prefixsum[x1+1][y1+1]++;
        prefixsum[x2+1][y1+1]--;
        prefixsum[x1+1][y2+1]--;
        prefixsum[x2+1][y2+1]++;          
    }
    int ans=0;
    for (int i = 1; i <= maxn+1; i++)
    {
        for (int j = 1; j <= maxn+1; j++)
        {
            prefixsum[i][j]+=prefixsum[i-1][j] + prefixsum[i][j-1]-prefixsum[i-1][j-1];
            ans+=prefixsum[i][j]==k;
        }
    }
    
    cout << ans;



    // int n,k;cin>>n>>k;
    // vector<vector<int>> prefixsum(maxn+2, vector<int>(maxn+2, 0));
 
    // while(n--) {
    //     int x1,y1,x2,y2;cin>>x1>>y1>>x2>>y2;
    //     for (int i = x1; i < x2; i++)
    //     {
    //         for(int j=y1; j<y2;j++) {
    //             prefixsum[i+1][j+1]++;
    //         }
    //     }            
    // }
    // int ans=0;
    // for (int i = 1; i <= maxn; i++)
    // {
    //     for (int j = 1; j <= maxn; j++)
    //     {
    //         if(prefixsum[i][j]==k) {
    //             ans++;
    //         }
    //     }
    // }
    
    // cout << ans;
}
