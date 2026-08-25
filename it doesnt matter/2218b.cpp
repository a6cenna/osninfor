// war without reason

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
    int a[7];
    for(int i=0;i<7;i++) cin>>a[i];
    sort(a,a+7);
    int sum=0;
    for(int i=0;i<6;i++) sum+=(-a[i]);
    sum+=a[6];

    cout << sum << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
