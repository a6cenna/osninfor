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
    int a[n][5];
    for(int i=0;i<n;i++) {
        for(int j=0;j<5;j++) cin>>a[i][j];
    }
    auto cur=a[0];
    int at=0;
    for(int i=1;i<n;i++) {
        int cnt=0;
        for(int j=0;j<5;j++) {
            if(a[i][j]<cur[j]) cnt++;
        }
        if(cnt>=3) {
            cur=a[i];
            at=i;
        }
    }
    for(int i=0;i<n;i++) {
        if(i==at) continue;
        int cnt=0;
        for(int j=0;j<5;j++) {
            if(a[i][j]>cur[j]) cnt++;
        }
        if(cnt<3) {
            cout << -1 << '\n';
            return;
        }
    }
    cout << at+1 << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
