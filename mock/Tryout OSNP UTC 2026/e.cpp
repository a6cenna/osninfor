#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pii pair<int,int>
#define pb push_back
#define fs first
#define sc second

void solve() {
    int n,q;cin>>n>>q;
    vector<int> p(n);
    for(int i=0;i<n;i++) cin>>p[i];
    while(q--) {
        int x,y;cin>>x>>y;
        x--;y--;
        swap(p[x],p[y]);
        bool ok=1;
        bool yah=1;
        for(int i=1;i<n;i++) {
            // if(p[i]-p[i-1]!=1&&p[i]-p[i-1]!=n-1) {
            //     cout << "NE\n";
            //     yah=0;
            //     break;
            // }
            if(p[i]<p[i-1]&&!ok||(p[i]<p[i-1]&&p[i-1]-p[i]!=n-1)) {
                cout << "NE\n";
                yah=0;
                break;
            }
            else if(p[i]<p[i-1]) ok=0;
            if(p[i]>p[i-1]&&p[i]-p[i-1]!=1) {
                cout << "NE\n";
                yah=0;
                break;
            }
        }
        if(yah) cout << "DA\n";
    }
}

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    solve();
}

/*
6 5 8
R 2
C 4
R 5
C 1
R 2
C 4
R 6
C 3
*/
