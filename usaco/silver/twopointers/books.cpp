#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n,t;cin>>n>>t;

    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int l=0,r=0,curr=0;

    int ans=0;

    while(l<n && r<n) {
        while(r<n) {
            curr+=a[r];
            r++;
            if(curr>t) {
                curr-=a[r-1];
                r--;
                break;
            }
        }

        ans=max(ans, r-l);
        curr-=a[l];
        l++;
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
