#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    int ans=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int temp=0;
        for (int j = i+1; j < n; j++)
        {
            if(a[i]<a[j]) {
                temp++;
            }
        }
        temp+=i;
        ans=min(ans, temp);
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
