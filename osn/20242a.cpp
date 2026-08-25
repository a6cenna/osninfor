// author: sofwant || a6cenna

#include <bits/stdc++.h>
using namespace std;

#define suffering_leaves_suffering_leaves ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define int ll
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back

void solve() {
    int n;cin>>n;
    pii lr[n];
    for(int i=0;i<n;i++) cin>>lr[i].fs>>lr[i].sc;
    int m;cin>>m;
    int a[m];
    for(int i=0;i<m;i++) cin>>a[i];
    sort(lr, lr+n);
    vector<pii> used;
    int cur=0;
    for(int i=0;i<n;i++) {
        if(lr[i].fs==lr[i+1].fs||lr[i].sc<=cur) continue;
        used.pb(lr[i]);
        cur=lr[i].sc;
    }
    
    sort(used.begin(), used.end());
    int ans=0;
    int mn=LLONG_MAX,mx=0;
    for(int i=0;i<m;i++) {
        mn=min(mn, a[i]);
        mx=max(mx, a[i]);
        int l=0,r=used.size()-1;
        int can=0;
        while(l<=r) {
            int mid=(l+r)/2;
            if(mn>=used[mid].fs&&mx<=used[mid].sc) {
                can=1;
                break;
            }

            if(mn>=used[mid].fs) {
                l=mid+1;
            }
            else r=mid-1;
        }
        if(!can) {
            ans++;
            mn=a[i];
            mx=a[i];
        }
        can=0;
        l=0,r=used.size()-1;
        while(l<=r) {
            int mid=(l+r)/2;
            if(mn>=used[mid].fs&&mx<=used[mid].sc) {
                can=1;
                break;
            }

            if(mn>=used[mid].fs) {
                l=mid+1;
            }
            else r=mid-1;
        }
        if(!can) {
            cout << -1 << '\n';
            return;
        }
    }

    cout << ans << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    solve();
}
