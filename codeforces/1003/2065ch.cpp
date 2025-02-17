#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n,m;cin>>n>>m;

    int a[n];
    vector<int> b(m);
    for(int i=0;i<n;i++) {cin>>a[i];}
    for(int i=0;i<m;i++) {cin>>b[i];}
    sort(b.begin(), b.end());
    int curr=INT_MIN;
    int possible=true;
    for(int i=0;i<n;i++) {
        int temp=INT_MAX;
        if(a[i]>=curr) temp=min(temp,a[i]);
        // terus apa?
        // cari nilai minimum dari array b? coba
        // binary search? lower bound?
        // b[j]-a[i]>=curr (cari yang itu lebih besar tapi paling kecil)
        // sama aja b[j]>=curr+a[i]
        auto it=lower_bound(b.begin(), b.end(), curr+a[i]);
        if(it!=b.end()) {
            int temp1=*it-a[i];
            temp=min(temp, temp1);
        }

        if(temp==INT_MAX) {
            possible=false;
            break;
        }
        curr=temp;
    }

    cout << (possible ? "YES" : "NO") << '\n';
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
