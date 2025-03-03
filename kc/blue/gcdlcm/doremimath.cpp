#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    // yang kita perluin cuma angka terkecil yang mungkin di bentuk sama yang paling besar
    // apa kaitannya sama gcd?
    // angka terkecil (>0) dihasilin dari kurangi terus menerus
    // karena pengurangan terus menerus pasti selisih terkecil it gcd dari semua angja
    int lowest=a[0];
    int maximum=a[0];
    for(int i=1;i<n;i++) {
        lowest=gcd(lowest, a[i]);
        maximum=max(maximum, a[i]);
    }

    cout << maximum/lowest << '\n';
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
