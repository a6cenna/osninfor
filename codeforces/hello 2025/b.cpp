#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    vector<int> freq;
    for(int i=0;i<n;) {
        int temp=a[i];
        int count=0;
        while(temp==a[i] && i < n) {
            i++;
            count++;
        }
        freq.push_back(count);
    }
    sort(freq.begin(), freq.end());
    int ans=freq.size();
    // freq.size()-1 karena kita ga pake yang terakhir
    for(int i=0;i<freq.size()-1;i++) {
        if(freq[i]<=k) {
            ans--;
            k-=freq[i];
        }
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
