#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n,k;cin>>n>>k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    sort(a,a+n, greater());

    // kurangi k dengan maks, kalau di elemen selanjutnya udah lebih dari k maka tambah ke need

    int need=0;

    for (int i = 0; i < n; i++)
    {
        if(k>=a[i]) {
            k-=a[i];
        }
        else {
            need+=k;
            break;
        }   
    }
    if(k>0) {
        cout << k << '\n';
        return;
    }
    cout << need << '\n';
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
