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
    int n;cin>>n;
    string s,t;cin>>s>>t;
    vector<int> diff1,diff2;
    for(int i=1;i<n;i++) {
        int x=s[i]-'0';
        int y=s[i-1]-'0';
        if(x>=y) diff1.pb(x-y);
        else {
            x+=10;
            diff1.pb(x-y);
        }
    }
    for(int i=1;i<n;i++) {
        int x=t[i]-'0';
        int y=t[i-1]-'0';
        if(x>=y) diff2.pb(x-y);
        else {
            x+=10;
            diff2.pb(x-y);
        }
    }
    if(diff1==diff2) {
        cout << "YA\n";
    }
    else cout << "TIDAK\n";
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
