#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define pii pair<int,int>
#define fs first
#define sc second

void solve() {
    int n,q;cin>>n>>q;
    vector<int> v;
    for(int i=2;i<=n;i++) {
        cout << "? " << i-1 << ' ' << i << endl;
        int resp;cin>>resp;
        v.pb(resp);
    }
    // v={0,1,0,1,0,0,1,0,0};
    // v={0,1,0,1,0};
    string ans=".";
    for(auto x:v) {
        if(x==1) {
            ans[ans.size()-1]='(';
            ans+=")";
        }
        else {
            ans+=".";
        }
    }
    int cnt=0;
    for(int i=0;i<ans.size();i++) {
        if(ans[i]=='.') cnt++;
    }
    int tmp=cnt/2;
    for(int i=0;i<ans.size();i++) {
        if(cnt>tmp&&ans[i]=='.') {
            ans[i]='(';
            cnt--;
        }
        else if(ans[i]=='.') {
            ans[i]=')';
        }
    }

    cout << "! " << ans << '\n';
}

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    solve();
}
