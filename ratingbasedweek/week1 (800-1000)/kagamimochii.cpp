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
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a, a+n);
    int l=n/2-1,r=n-1;
    int ans=0;
    while(l>=0&&r>=n/2) {
        if(2*a[l]>a[r]) l--;
        else {
            ans++;
            r--;
            l--;
        }
    }
    cout << ans << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
