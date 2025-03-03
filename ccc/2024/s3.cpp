#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,m;cin>>n>>m;
    int q;cin>>q;
    vector<vector<int>> cp(m+1);

    for (int i = 0; i < n; i++)
    {
        int c,p;cin>>c>>p;
        cp[c].push_back(p);
    }
    
    int ans=0;
    int minfirst=INT_MAX;
    int maxsecond=INT_MIN;
    for (int i = 1; i <= m; i++)
    {
        sort(cp[i].begin(), cp[i].end(), greater<int>());
    }
    
    for (int i = 1; i <= m; i++)
    {
        ans+=cp[i][0];
        minfirst=min(cp[i][0], minfirst);
        maxsecond=max(maxsecond, cp[i][1]);
    }
    
    if(minfirst<maxsecond) {
        ans+=maxsecond-minfirst;
    }

    cout << ans;
}
