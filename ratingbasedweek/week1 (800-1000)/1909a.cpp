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
    int n;cin>>n;
    int posy=0;
    int posx=0;
    int x[2],y[2];
    memset(x, 0, sizeof(x));
    memset(y, 0, sizeof(y));
    while(n--) {
        int a,b;cin>>a>>b;
        if(a>0&&!x[0]){
            posx++;
            x[0]=1;
        }
        else if(a<0&&!x[1]) {
            posx++;
            x[1]=1;
        }
        if(b>0&&!y[0]){
            posy++;
            y[0]=1;
        }
        else if(b<0&&!y[1]) {
            posy++;
            y[1]=1;
        }
    }
    cout << (posx==2&&posx==posy?"NO":"YES") << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
