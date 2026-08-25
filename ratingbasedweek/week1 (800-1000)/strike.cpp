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
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    vector<pii> v;
    for(int i=0;i<n;i++) {
        int cnt=1;
        while(i+1<n&&a[i+1]==a[i]) {
            cnt++;
            i++;
        }
        v.pb({a[i], cnt});
    }
    sort(v.begin(), v.end());
    int l=-1,r=-1;
    for(int i=0;i<v.size();i++) {
        if(v[i].sc<k) continue;
        int tmpl=v[i].fs, tmpr=v[i].fs;
        while(i+1<v.size()&&v[i+1].fs==v[i].fs+1&&v[i+1].sc>=k) {
            tmpr++;
            i++;
        }
        if(r-l<=tmpr-tmpl) {
            r=tmpr;l=tmpl;
        }
    }
    if(l==-1) {
        cout << -1 << '\n';
        return;
    }
    cout << l << ' ' << r << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
