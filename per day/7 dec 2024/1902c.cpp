#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    vector<long long> a(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    if (n==1) {
        cout << 1 << '\n';
        return;
    }
    sort(a.begin(),a.end());
    long long x=a[n-1]-a[0];
    for (int i = 1; i < n-1; i++)
    {
        x=__gcd(x,  (a[n-1]-a[i])*1LL);
    }
    if (x == 0) x = 1;
    long long need=0;
    long long dif[n];
    for(int i=0;i<n;i++) {
        dif[i]=(a[n-1]-a[i])/x;
        need+=dif[i];
    }
    long long add = 0;
    for (int i = n-1; i >= 0; i--) {
        if (add==dif[i]) {
            add++;
        }
        else break;
    }

    cout << need+add << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin>>t;
    while(t--) {
        solve();
    }
}
