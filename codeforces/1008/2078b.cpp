#include <bits/stdc++.h>

#define suffering_leaves_suffering_leaves ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

void solve() {
    // two case: ganjil genap
    // kalau genap pasti 1, ganjil kita cek lagi kecil n-1 atau deret arit k-1 sampai 1
    // HECK NAH KALAU GANJIL JUGA 1 (i overcomplicated it)
    int n,k;cin>>n>>k;
    if(k%2==0) {
        for(int i=0;i<n-2;i++) cout << n-1 << ' ';
        cout << n << ' ' << n-1;
    }
    else {
        for(int i=0;i<n-1;i++) cout << n << ' ';
        cout << n-1;
    }

    cout << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
