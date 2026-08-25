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
    int n,m;cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    int sum=0;
    while(m--) {
        int b;cin>>b;
        sum+=a[b-1];
    }

    cout << sum << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
