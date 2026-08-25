// war without reason

#include <bits/stdc++.h>
using namespace std;

#define war_without_reason ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back
#define int ll

void solve() {
    int n;cin>>n;
    vector<int> a(n);
    int mn=1e9+1;
    int mnidx=-1;
    int ok=1;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        if(i>0&&gcd(a[i], a[i-1])!=1) ok=0;
        if(a[i]<mn) mnidx=i;
        mn=min(mn,a[i]);
    }
    if(ok) {
        cout << 0 << '\n';
        return;
    } 
    int cur=1;
    cout << n-1 << '\n';
    for(int i=mnidx+1;i<n;i++) {
        cout << mnidx+1 << ' ' << i+1 << ' ' << mn << ' ' << mn+cur << '\n';
        cur++;
    }
    cur=1;
    for(int i=mnidx-1;i>=0;i--) {
        cout << mnidx+1 << ' ' << i+1 << ' ' << mn << ' ' << mn+cur << '\n';
        cur++;
    }
}

signed main() {
    war_without_reason

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
