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
    string s;cin>>s;
    map<pii,int> mp;
    pii cur={0,0};
    int l=-1;
    int r=n+1;
    mp[cur]=0;
    for(int i=0;i<n;i++) {
        if(s[i]=='L') cur.fs--;
        if(s[i]=='R') cur.fs++;
        if(s[i]=='U') cur.sc++;
        if(s[i]=='D') cur.sc--;
        if(mp.count(cur)!=0&&i-mp[cur]+1<r-l+1) {
            l=mp[cur]+1;
            r=i+1;
        }
        mp[cur]=i+1;
    }
    if(l==-1||r==n+1) {
        cout << -1 << '\n';
        return;
    }
    cout << l << ' ' << r << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
