// author: sofwant || a6cenna
// created at 03/04/2025
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
    int n,m;cin>>n>>m;
    vector<vector<int>> a(n+1, vector<int>(m+1, 0));
    pii color[n*m+1]={};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            color[a[i][j]].fs++;
        }
    }
    int fixed=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==a[i][j+1]||a[i][j]==a[i+1][j]){
                color[a[i][j]].sc=1;
                fixed=a[i][j];
            }
            else if(fixed==0) fixed=a[i][j];
        }
    }
    int ans=0;
    for(int i=1;i<=n*m;i++) {
        if(i==fixed) continue;
        if(color[i].sc==1) ans+=2;
        else if(color[i].fs>0) ans++;
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
