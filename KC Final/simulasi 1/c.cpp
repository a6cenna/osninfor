#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define pii pair<int,int> 
#define pb push_back
#define fs first
#define sc second

void solve() {
    int n;cin>>n;
    vector<int> h(n);
    bool same=1;
    int SUM=0;
    for(int i=0;i<n;i++) {
        cin>>h[i];
        SUM+=h[i];
        if(i>0&&h[i]!=h[i-1]) same=0; 
    }
    if(same) {
        int ans=0;
        for(int i=1;i*i<=n;i++) {
            if(n%i==0) {
                ans++;
                if(i*i!=n) ans++;
            }
        }
        cout << ans << '\n';
        return;
    }
    int sum=0;
    int ans=0;
    for(int len=1;len<=n;len++) {
        sum+=h[len-1];
        bool ok=1;
        int cur=0;
        if(SUM%sum!=0) continue;
        for(int i=len;i<n;i++) {
            cur+=h[i];
            if(cur==sum) {
                cur=0;
            }
            if(cur>sum) {
                ok=0;
                break;
            }
        }
        if(cur!=0) ok=0;
        ans+=ok;
    }

    cout << ans << '\n';
}

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    solve();
}
