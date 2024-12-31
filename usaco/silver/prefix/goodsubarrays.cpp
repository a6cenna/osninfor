#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    string s;cin>>s;
    vector<int> prefixsum(n+1, 0);
    for (int i = 1; i <= n; i++)
    {
        prefixsum[i]=prefixsum[i-1]+s[i-1]-'1';
    }
    map<int, int> subsum;
    subsum[0]=1;
    long long ans=0;
    for(int i=1;i<=n;i++) {
        ans+=subsum[prefixsum[i]];
        subsum[prefixsum[i]]++;
    }

    cout << ans << '\n';
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
