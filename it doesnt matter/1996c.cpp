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
    int n,q;cin>>n>>q;
    string a,b;cin>>a>>b;
    vector<vector<int>> pre(n+1, vector<int>(26,0)),pre1(n+1, vector<int>(26,0));
    for(int i=1;i<=n;i++) {
        pre[i]=pre[i-1];
        pre1[i]=pre1[i-1];
        pre[i][a[i-1]-'a']=pre[i-1][a[i-1]-'a']+1;
        pre1[i][b[i-1]-'a']=pre1[i-1][b[i-1]-'a']+1;
    }
    while(q--) {
        int l,r;cin>>l>>r;
        int ans=0;
        for(int i=0;i<26;i++) {
            if(pre[r][i]-pre[l-1][i]>pre1[r][i]-pre1[l-1][i]) ans+=pre[r][i]-pre[l-1][i]-(pre1[r][i]-pre1[l-1][i]);
        }
        cout << ans << '\n';
    }
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
