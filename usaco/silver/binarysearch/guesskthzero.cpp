#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n,t;cin>>n>>t;
    int k;cin>>k;
    int l=1,r=n;

    while(l<=r) {
        int mid=(l+r)/2;
        cout << "? " << 1 << " " << mid;
        int sum;
        cin>>sum;
        if(mid-sum>=k) {
            r=mid-1;
        }
        else l=mid+1;
    }

    cout << "! " << r+1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
