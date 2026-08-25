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
    for(int i=1;i<=n;i++) {
        a[i-1].sc=i;
        cin>>a[i-1].fs;
    }
    sort(a, a+n);
    for(int i=0;i<3;i++) {
        cout << a[i].sc << ' ';
    }
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
