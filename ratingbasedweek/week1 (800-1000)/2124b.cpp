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
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    if(n!=2) {
        if(a[0]>a[1]) {
            a[0]+=a[1];
            a[1]=0;
        }
        else {
            a[1]+=a[2];
            a[2]=0;
        }
    }
    int ans=a[0];
    int curr=a[0];
    for(int i=1;i<n;i++) {
        curr=min(curr,a[i]);
        ans+=curr;
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
