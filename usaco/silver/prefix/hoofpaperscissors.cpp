#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("hps.in", "r", stdin);
    freopen("hps.out", "w", stdout);

    int n;cin>>n;
    vector<vector<int>> psum(n+1, vector<int>(3));
    map<char, int> mp;
    mp['H']=0;
    mp['P']=1;
    mp['S']=2;
    for (int i = 1; i <= n; i++)
    {
        char c;cin>>c;
        for (int j = 0; j < 3; j++)
        {
            psum[i][j]=psum[i-1][j];
        }
        psum[i][mp[c]]++;
    }
    int maxans=INT_MIN;
    for(int i=1;i<=n;i++) {
        int m1=INT_MIN;
        for(int j=0;j<3;j++) {
            m1=max(m1, psum[i][j]-psum[0][j]);
        }
        int m2=INT_MIN;
        for(int j=0;j<3;j++) {
            m2=max(m2, psum[n][j]-psum[i][j]);
        }
        maxans=max(maxans, m1+m2);
    }

    cout << maxans;
}
