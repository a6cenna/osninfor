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
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int cnt[4];
    memset(cnt, 0, sizeof(cnt));
    int mn=INT_MAX;
    for(int i=0;i<n-1;i++) {
        cnt[a[i]]++;
        if(cnt[1]+cnt[2]-cnt[3]>=mn) {
            cout << "YES\n";
            return;
        }
        if(cnt[1]>=cnt[2]+cnt[3]) mn=min(mn, cnt[1]+cnt[2]-cnt[3]);
    }

    cout << "NO\n";
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
