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
    int n,m;cin>>n>>m;
    pii start={0,0},end;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            char c;cin>>c;
            if(c=='#') {
                if(start.fs==0) {
                    start={i,j};
                }
                end={i,j};
            }
        }
    }
    cout << (start.fs+end.fs)/2 << ' ' << start.sc << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
