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
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    int at=0;
    for(int i=0;i<n;i++) {
        if(i>at) break;
        at=max(at, i+a[i]-1);
    }
    cout << min(at+1, n) << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
