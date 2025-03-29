// author: sofwant || a6cenna
// created at 29/04/2025
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
    int n,r,c;cin>>n>>r>>c;
    string s;cin>>s;
    set<pii> pos;
    pii taka=make_pair(r,c);
    pii fire=make_pair(0,0);
    pos.insert(fire);
    for(int i=0;i<n;i++) {
        if(s[i]=='N') {
            taka.fs++;
            fire.fs++;
        }
        else if(s[i]=='W') {
            taka.sc++;
            fire.sc++;
        }
        else if(s[i]=='E') {
            taka.second--;
            fire.sc--;
        }
        else {
            taka.fs--;
            fire.fs--;
        }
        pos.insert(fire);
        if(pos.find(taka)==pos.end()) cout << 0;
        else cout << 1; 
    }
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
