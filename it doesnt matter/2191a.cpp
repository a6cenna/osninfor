// in the pool

#include <bits/stdc++.h>
using namespace std;

#define suffering_leaves_suffering_leaves ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back

void solve() {
    int n;cin>>n;
    pii a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i].fs;
        a[i].sc=i%2;
    }
    pii a1[n];
    for(int i=0;i<n;i++) a1[i]=a[i];
    sort(a,a+n);
    int ok=true;
    for(int i=0;i<n-1;i++) {
        if(a[i].sc==a[i+1].sc) ok=false;
    }
    if(ok) {
        cout << "YES" << '\n';
        return;
    }
    for(int i=0;i<n;i++) a1[i].sc=(i+1)%2;
    sort(a1,a1+n);
    ok=true;
    for(int i=0;i<n-1;i++) {
        if(a1[i].sc==a1[i+1].sc) ok=false;
    }
    if(ok) {
        cout << "YES" << '\n';
        return;
    }
    cout << "NO" << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
