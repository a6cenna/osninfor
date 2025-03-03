#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    int ans=0;
    for (int i=1;i<=n;i++) {
        for(int j=i;j<=n;j++) {
            long long x=i*i+j*j;
            int sq=sqrt(x);
            if(x==sq*sq && sq<=n) {
                ans++;
            }
        }
    }
    cout << ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
