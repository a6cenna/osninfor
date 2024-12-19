#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n,x;cin>>n>>x;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        a[i]=0;
    }
    for (int i = 0; i < n; i++)
    {
        int y;
        cin >>y;
        a[y]++;
    }
    for (int i = 0; i < n; i++)
    {
        if(a[i]>1) {
            a[i+x]+=a[i]-1;
            a[i]=1;
        }
    }
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]) {
            ans++;
        }
        else break;
    }
    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}

