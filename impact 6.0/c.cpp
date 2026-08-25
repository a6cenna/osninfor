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
#define int ll

void solve() {
    int w,u,v;cin>>w>>u>>v;
    int ww=w,uu=u,vv=v;
    int ans=0;
    // ans+=(w/2);
    // ans+=(v/4);
    // ans+=(u/4);
    // w=(w%2);
    // v=(v%4);
    // u=(u%4);
    // if(w>0&&(v>=2||u>=2)) ans++;
    // int tmp=0;
    // tmp+=min(uu/2, ww);
    // uu-=min(uu/2, ww)*2;
    // if(uu>=4) ans+=uu/4;
    // if(ww>0) {
    //     tmp+=min(vv/2, ww);
    // }
    // vv-=min(vv/2, ww)*2;
    // ans=max(tmp,ans);
    u/=2;
    v/=2;
    if(w) ans+=(w+u+v)/2;
    else ans+=u/2+v/2;

    cout << ans << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
