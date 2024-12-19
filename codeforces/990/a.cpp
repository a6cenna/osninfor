#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    // sum and check if the sum is a perfect square but odd
    int sum=0;
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        sum+=a[i];
        int sq=sqrt(sum);
        if(sq*sq==sum && sq%2!=0) {
            ans++;
        }
    }
    
    cout << ans << '\n';
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
