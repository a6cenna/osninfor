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
    int vol=0;
    bool play=0;
    while(q--) {
        int a;cin>>a;
        if(a==1) vol++;
        else if(a==3) play=!play;
        else if(vol>=1) vol--;
        cout << (play&&vol>=3?"Yes":"No") << '\n';
    }
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
