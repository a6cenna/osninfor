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
    int a[n],b[n];
    int mx=INT_MIN,mn=INT_MAX;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        mx=max(mx,a[i]);
    }
    for(int i=0;i<n;i++) {
        cin>>b[i];
        mn=min(mn,b[i]);
    }
    cout << (mx<=mn?mn-mx+1:0) << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
