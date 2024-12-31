#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long n,m;cin>>n>>m;

    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    long long b[m];
    for(int i=0;i<m;i++) {
        cin>>b[i];
    }
    long long l=0;
    long long r=2e9;
    long long ans=INT_MAX;
    while(l<=r) {
        long long mid=(l+r)/2;
        bool possible=true;
        int j=0;
        for(int i=0;i<n;i++) {
            while(j<m && b[j]+mid < a[i]) {
                j++;
            }
            if(j >= m || abs(b[j]-a[i]) > mid) {
                possible=false;
                break;
            }
        }
        if(possible) {
            r=mid-1;
            ans=min(ans, mid);
        }
        else {
            l=mid+1;
        }
    }

    cout << ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
