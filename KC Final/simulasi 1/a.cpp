#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define pii pair<int,int> 
#define pb push_back
#define fs first
#define sc second

void solve() {
    int n,k;cin>>n>>k;
    vector<int> p(n);
    for(int i=0;i<n;i++) cin>>p[i];
    vector<int> tmp=p;
    sort(tmp.begin(), tmp.begin()+k);
    int ans=(tmp!=p);
    for(int i=k;i<n;i++) {
        vector<int> v=p;
        sort(v.begin()+(i-k+1), v.begin()+i+1);
        if((v[i-k]!=tmp[i-k]||v[i]!=tmp[i])) {
            ans++;
            cout << "sebelum: ";
            for(auto x:tmp) {
                cout << x << ' ';
            }
            cout << '\n';
            cout << "sesudah: ";
            for(auto x:v) {
                cout << x << ' ';
            }
            cout << '\n';
        }
        tmp=v;
    }

    cout << ans << '\n';
}

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    solve();
}
