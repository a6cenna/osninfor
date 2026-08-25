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
    int n,m;cin>>n>>m;
    string s,t;cin>>s>>t;
    set<char> todo,aoi;
    for(auto x:s) todo.insert(x);
    for(auto x:t) aoi.insert(x);
    int q;cin>>q;
    while(q--) {
        string w;cin>>w;
        bool isTodo=true;
        bool isAoi=true;
        for(int i=0;i<w.length();i++) {
            if(!todo.count(w[i])) isTodo=false;
            if(!aoi.count(w[i])) isAoi=false;
        }
        if(isTodo==isAoi) cout << "Unknown";
        else cout << (isTodo?"Takahashi":"Aoki");
        cout << '\n';
    }
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
