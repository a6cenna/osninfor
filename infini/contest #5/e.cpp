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
    int q;cin>>q;
    map<int,int> mp;
    while(q--) {
        int tipe;cin>>tipe;
        if(tipe==1) {
            int x;cin>>x;
            mp[x]++;
        }
        else if(tipe==2) {
            int x,c;cin>>x>>c;
            if(c<mp[x]) mp[x]-=c;
            else mp.erase(x);
        }
        else {
            cout << (*mp.rbegin()).fs-(*mp.begin()).fs << '\n';
        }
    }
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
