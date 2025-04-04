// author: sofwant || a6cenna
// created at 04/04/2025
// suffering leaves suffering leaves.

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
    int p[n+1];
    for(int i=1;i<=n;i++)cin>>p[i];
    bool used[n+1]={0};
    int d;
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>d;
        if(!used[p[d]]){
            used[p[d]]=1;
            ans++;
            int temp=p[p[d]];
            while(!used[temp]) {
                used[temp]=1;
                ans++;
                temp=p[temp];
            }
            cout << ans << ' ';
        }
        else cout << ans << ' ';
    }
    cout << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
