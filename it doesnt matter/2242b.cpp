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
    bool ok=0;
    int cont=INT_MAX;
    for(int i=0;i<n;i++) {
        cnt[a[i]]++;
        if(!ok&&cnt[1]+cnt[2]-cnt[3]>=cont&&i!=n-1&&cont!=INT_MAX) ok=1;
        if(cnt[1]>=cnt[2]+cnt[3]&&i<=n-3) cont=min(cont, cnt[1]+cnt[2]-cnt[3]);
    }

    cout << (ok?"YES":"NO") << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
