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

void solve() {
    pii milk[3];
    for(int i=0;i<3;i++) {
        int c,m;cin>>c>>m;
        milk[i]={c,m}; // kapasitas, susu
    }
    for(int i=0;i<100;i++) {
        int cur=i%3;
        int nxt=(cur+1)%3;
        int diff=min(milk[nxt].fs-milk[nxt].sc, milk[cur].sc);
        milk[cur].sc-=diff;
        milk[nxt].sc+=diff;
    }
    for(int i=0;i<3;i++) {
        cout << milk[i].sc << '\n';
    }
}

int main() {
    suffering_leaves_suffering_leaves

    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);

    solve();
}
