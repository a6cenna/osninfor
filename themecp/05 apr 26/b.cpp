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
    int cnt=1;
    int at=-1;
    for(int i=n-2;i>=0;i--) {
        if(cnt==k) {
            at=i+1;
            break;
        }
        if(a[i]==a[n-1]) cnt++;
    }
    int can=false;
    int cnt1=1;
    for(int i=1;i<=at;i++) {
        if(cnt1==k) {
            can=true;
            break;
        }
        if(a[i]==a[0])cnt1++;
    }
    if(a[0]==a[n-1]) can=true;
    cout << (can&&cnt==k?"YES":"NO") << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
