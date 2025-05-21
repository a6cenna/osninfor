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
    int n,a,b,c;cin>>n>>a>>b>>c;

    // int firstmin=min({a,b,c});
    int ans=0;
    for(int i=0;i*a<=n;i++) {
        for(int j=0;j*b+i*a<=n;j++) {
            int sisa=n-(i*a+j*b);
            if(sisa%c==0) {
                ans=max(ans, i+j+sisa/c);
            }
        }
    }
    
    cout << ans;
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
