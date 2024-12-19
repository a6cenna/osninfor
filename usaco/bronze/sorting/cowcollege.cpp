#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a, a+n);
    long long maxval=0;
    long long tuition;
    // kita cek satu persatu elemen, saat kita pilih
    // elemen banyak elemen yang kurang dari elemen tersebut dikali kan
    for(int i=0;i<n;i++) {
        if(i>0 && a[i]==a[i-1]) {
            continue;
        }
        if(a[i]*(n-i)>maxval) {
            maxval=a[i]*(n-i);
            tuition=a[i];
        }
    }
    cout << maxval << " " << tuition;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
