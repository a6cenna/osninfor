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
    int l,r;cin>>l>>r;
    int ans=l;
    int selisih=0;
        for(int i=l;i<=r;i++) {
            int temp=i;
            int maxd=0;
            int mind=9;
            while(temp) {
                int dig=temp%10;
                temp/=10;
                maxd=max(maxd,dig);
                mind=min(mind,dig);
            }
            if(maxd-mind>=selisih) {
                ans=i;
                selisih=maxd-mind;
                if(selisih==9) break;
            }
        }

    cout << ans << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
