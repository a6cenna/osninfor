// war without reason

#include <bits/stdc++.h>
using namespace std;

#define suffering_leaves_suffering_leaves ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back
#define int ll

void solve() {
    int n,m;cin>>n>>m;
    vector<int> row(n+1,-1),col(n+1,-1); // row[i] = di row ke i col yang dipake apa
    while(m--) {
        int r,c;cin>>r>>c;
        if(row[r]!=-1&&col[c]!=-1) {
            int tmp=row[r];
            int tmp1=col[c];
            col[tmp]=-1;
            row[tmp1]=-1;
        }
        else if(row[r]!=-1) {
            col[row[r]]=-1;
        }
        else if(col[c]!=-1) {
            row[col[c]]=-1;
        } 
        row[r]=c;
        col[c]=r;
    }
    int ans=0;
    for(int i=1;i<=n;i++) {
        if(row[i]!=-1) ans++;
    }

    cout << ans << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    solve();
}
