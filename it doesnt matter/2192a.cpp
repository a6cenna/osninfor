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
    int ans=-1;
    s+=s;
    for(int i=0;i<n;i++) {
        int cnt=0;
        for(int j=i;j<n+i;j++) {
            while(j+1<n+i&&s[j+1]==s[j]) j++;
            cnt++;
        }
        ans=max(ans,cnt);
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
