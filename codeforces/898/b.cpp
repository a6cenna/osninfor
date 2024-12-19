#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin>>n;

    int a[n];
    int minim=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a, a+n);
    a[0]++;

    int ans = a[0];

    for (int i = 1; i < n; i++)
    {
        ans*=a[i];
    }
    
    cout << ans<<"\n";
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
