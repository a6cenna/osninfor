// war without reason

#include <bits/stdc++.h>
using namespace std;

#define war_without_reason ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back
#define int ll

void solve() {
    int n,k;cin>>n>>k;
    vector<int> pref(n+1, 0);
    for(int i=0;i<n;i++) {
        int x;cin>>x;
        pref[i+1]=pref[i]+x;
    }
    while(k--) {
        int b;cin>>b;
        int l=0,r=n,pos=n+1;
        while(l<=r) {
            int mid=(l+r)/2;
            if(pref[mid]>b) {
                pos=mid;
                r=mid-1;
            }
            else l=mid+1;
        }
        cout << pos-1 << ' ';
    }
}

signed main() {
    war_without_reason

    solve();
}
