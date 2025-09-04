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
    int s1,e1,s2,e2,s3,e3,s4,e4;cin>>s1>>e1>>s2>>e2>>s3>>e3>>s4>>e4;
    int ans=0;
    for(int i=0;i<=176;i++) {
        if((i<s1||i>=e1)&&(i<s2||i>=e2)&&(i<s4||i>=e4)&&i>=s3&&i<e3) {
            ans++;
        }
    }

    if(ans) cout << "Guitar solo (" << ans << " sec.)";
    else cout << "No guitar solo :(";
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
