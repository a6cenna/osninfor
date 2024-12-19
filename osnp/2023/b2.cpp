#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,m,k;cin>>n>>m>>k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a+n);
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]<=m+k) continue;
        if(a[i]>m+k) {
            ans++;
            m=a[i];
        }
        else {
            m+=k;
        }
    }
    cout << ans;
}
