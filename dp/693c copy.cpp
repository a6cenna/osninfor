#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    vector<int> dp(n);
    for (int i = n-1; i >= 0; i--)
    {
        dp[i]=a[i];
        int val=i+a[i];
        if(val<n){
            dp[i]+=dp[val];
        }
    }

    sort(dp.begin(), dp.end());

    cout << dp[dp.size()-1] << endl;
    
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
