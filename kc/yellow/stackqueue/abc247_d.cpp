// author: sofwant || a6cenna
// created at 30/03/2025
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
    int q;cin>>q;
    queue<pii> query;
    while(q--) {
        int i;cin>>i;
        if(i==1) {
            int x,c;cin>>x>>c;
            query.push(make_pair(x, c));
        }
        else {
            int c;cin>>c;
            ll sum=0;
            while(c) {
                ll ambil=min(query.front().sc, c);
                sum+=ambil*query.front().fs;
                query.front().sc-=ambil;
                c-=ambil;
                if(query.front().sc==0) query.pop();
            }
            cout << sum << '\n';
        }
    }
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
