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
    bool od=0,ev=0;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        if(a[i]%2==0) ev=1;
        else od=1;
    }
    if(od&ev) {
        cout << "-1\n";
        return;
    }
    int q=40;
    vector<int> ans;
    while(q--) {
        sort(a,a+n);
        bool ok=true;
        for(int i=0;i<n;i++) {
            if(a[i]!=0) ok=false;
        }
        if(ok) break;
        int mid=(a[0]+a[n-1])/2;
        for(int i=0;i<n;i++) {
            a[i]=abs(a[i]-mid);
        }
        ans.pb(mid);
    }
    cout << ans.size() << '\n';
    if(ans.empty()) cout << 0;
    for(int i=0;i<ans.size();i++) cout << ans[i] << ' ';
    cout << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
