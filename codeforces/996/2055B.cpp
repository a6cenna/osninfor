#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    vector<int> a(n), b(n);
    int need=0;
    long long mindif=LLONG_MAX;
    long long howmuch=0;
    bool fail=0;
    for(int i=0;i<n;i++) {cin>>a[i];}
    for(int i=0;i<n;i++) {
        cin>>b[i];
        long long diff=a[i]-b[i];
        if(diff<0) {
            need++;
            howmuch=abs(diff);
        }
        else {
            mindif=min(mindif, diff);
        }
        if(need>1) {
            fail=true;
        }
    }
    if(fail) {
        cout << "NO" << '\n';
        return;
    }
    if(mindif>=howmuch) {
        cout << "YES" << '\n';
    }
    else cout << "NO" << '\n';
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
