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
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int temp=0;
    for(int i=0;i<n;i++) {
        if(i==k-1) break;
        if(a[i]>a[k-1]) {
            temp=i;
            break;
        }
    }
    swap(a[k-1], a[temp]);
    int ans=0;
    if(temp!=0) ans++;
    for(int i=temp+1;i<n;i++) {
        if(a[i]>a[temp]) break;
        ans++;
    }
    ans=max(ans, temp-1);
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
