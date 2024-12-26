#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // freopen("filename.in", "r", stdin);
    // freopen("filename.out", "w", stdout);
    int n,k;cin>>n>>k;
    vector<int> pre(n+1, 0);
    for (int i = 0; i < k; i++)
    {
        int a,b;cin>>a>>b;
        a--;
        b--;
        pre[a]++;
        pre[b+1]--;
    }
    int ans[n];
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=pre[i];
        ans[i]=sum;
    }
    sort(ans, ans+n);
    cout << ans[n/2];
}
