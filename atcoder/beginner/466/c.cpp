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
    int n;cin>>n;
    int l=1;
    int ans=0;
    for(int r=1;r<=n;) {
        r=max(r,l);
        bool ok=true;
        while(r+1<=n) {
            cout << "? " << l << ' ' << r+1 << endl;
            string s;cin>>s;
            if(s=="Yes") r++;
            else break;
        }
        ans+=(r-l);
        // cout << r << " dbg\n";
        l++;
    }

    cout << "! " << ans << endl;
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
