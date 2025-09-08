// author: sofwant || a6cenna

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
    pii a[n],b[n],c[n];
    for(int i=0;i<n;i++) {
        cin>>a[i].fs;
        a[i].sc=i;
    }
    for(int i=0;i<n;i++) {
        cin>>b[i].fs;
        b[i].sc=i;
    }
    for(int i=0;i<n;i++) {
        cin>>c[i].fs;
        c[i].sc=i;
    }
    sort(a,a+n, greater<pii>());
    sort(b,b+n, greater<pii>());
    sort(c,c+n, greater<pii>());
    int ans=0;
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            for(int k=0;k<3;k++) {
                if(a[i].sc!=b[j].sc&&a[i].sc!=c[k].sc&&c[k].sc!=b[j].sc) ans=max(ans, a[i].fs+b[j].fs+c[k].fs);
            }
        }
    }
    cout << ans << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
