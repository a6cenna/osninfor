#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    vector<long long> prefixsum(n+1, 0);
    for (int i = 1; i <= n; i++)
    {
        int x;cin>>x;
        prefixsum[i]=x+prefixsum[i-1];
    }
    long long maxsub=prefixsum[1];
    long long minprefix=prefixsum[0];
    for(int i=1;i<=n;i++) {
        maxsub = max(maxsub, prefixsum[i]-minprefix);
        minprefix=min(minprefix, prefixsum[i]);
    }

    cout << maxsub;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
