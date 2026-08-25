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
    multiset<int> ms;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        ms.insert(a[i]);
    }
    int l=0,r=n-1;
    while(l<=r) {
        if(a[l]==*ms.begin()||a[l]==*ms.rbegin()) {
            ms.erase(ms.find(a[l]));
            l++;
        }
        else if(a[r]==*ms.begin()||a[r]==*ms.rbegin()) {
            ms.erase(ms.find(a[r]));
            r--;
        }
        else break;
    }
    if(l>=r) cout << -1 << '\n';
    else cout << l+1 << ' ' << r+1 << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
