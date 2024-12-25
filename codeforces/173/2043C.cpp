#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int idx=0;
    for(int i=0;i<n;i++) {
        if(abs(a[i])!=1) idx=i;
    }
    pair<int,int> s, p, s1, s2;
    int x=0;
    for(int i=idx-1;i>=0;i--) {
        x+=a[i];
        s.first=min(s.first, x);
        s.second=max(s.second, x);
        s1.first=min(s1.first, x-s.second);
        s1.second=max(s1.second, x-s.first);
    }
    x=0;
    for(int i=idx+1;i<n;i++) {
        x+=a[i];
        p.first=min(p.first, x);
        p.second=max(p.second, x);
        s2.first=min(s2.first, x-p.second);
        s2.second=max(s2.second, x-p.first);
    }
    set<int> sum;
    for (int i = s1.first; i <= s1.second; i++)
    {
        sum.insert(i);
    }
    for (int i = s2.first; i <= s2.second; i++)
    {
        sum.insert(i);
    }
    for(int i=a[idx]+s.first+p.first;i<=a[idx]+s.second+p.second;i++) {
        sum.insert(i);
    }
    
    cout << sum.size() << '\n';
    for(auto a:sum) {
        cout << a << " ";
    }
    cout << '\n';
    // vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));

    // for (int i = 1; i <= n; i++) {
    //     for (int j = i; j <= n; j++) {
    //         dp[i][j] = dp[i][j - 1] + a[j - 1];
    //     }
    // }
    // set<int> sums;
    // sums.insert(0);
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <=n; j++)
    //     {
    //         sums.insert(dp[i][j]);
    //     }
        
    // }
    // cout << sums.size() << endl;
    // for (auto sum: sums) 
    // {
    //     cout << sum << " ";
    // }
    // cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
