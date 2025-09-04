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
    int a[n],b[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    bool vis[n+1];
    memset(vis, 0, sizeof(vis));
    int ans=-1;
    for(int i=n-1;i>=0;i--) {
        if(vis[a[i]]||vis[b[i]]||a[i]==b[i]) {
            ans=i;
            break;
        }
        else if(i!=n-1&&(a[i+1]==a[i]||b[i+1]==b[i])) {
            ans=i;
            break;
        }
        if(i!=n-1) {
            vis[a[i+1]]=true;
            vis[b[i+1]]=true;
        }
    }

    cout << ans+1 << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
