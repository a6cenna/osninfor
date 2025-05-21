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

ll MAXR=1e9;

void solve() {
    ll n;cin>>n;
    pll segment[n];
    for(int i=0;i<n;i++) {
        int l,r;cin>>l>>r;
        segment[i].fs=l;
        segment[i].sc=r;
    }
    ll l=0,r=MAXR;
    while(l<r) {
        int mid=(l+r)/2;
        bool can=true;
        ll templ=0,tempr=0;
        for(auto seg:segment) {
            templ=max(templ-mid, seg.fs);
            tempr=min(tempr+mid, seg.sc);
            if(templ>tempr) {
                can=false;
                break;
            }
        }
        if(can) r=mid;
        else l=mid+1;
    }
    cout << r << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
