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
#define int ll

void solve() {
    int n;cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    for(int i=0;i<n;i++) {
        int c;cin>>c;
        if(a[i]+b[i]==c) cout << "OK\n";
        else cout << "Eh salah, yang benar harusnya " << a[i]+b[i] << '\n';
    }
}

signed main() {
    suffering_leaves_suffering_leaves

    solve();
}
