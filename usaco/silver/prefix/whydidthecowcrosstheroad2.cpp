#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("maxcross.in", "r", stdin);
    freopen("maxcross.out", "w", stdout);
    int n,k,b;cin>>n>>k>>b;

    vector<int> a(n+1, 1);
    vector<int> presum(n+1, 1);
    for (int i = 0; i < b; i++)
    {
        int x;cin>>x;
        a[x]--;
    }
    presum[0]=0;
    for(int i=1;i<=n;i++) {
        presum[i]=presum[i-1]+a[i];
    }
    int maxans=INT_MIN;
    for (int i = 1; i <= n-k+1; i++)
    {
        maxans=max(maxans, presum[i+k-1]-presum[i-1]);
    }
    cout << k-maxans;
}
