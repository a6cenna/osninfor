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
    int cnt=0;
    vector<int> ans;
    vector<int> ans1;
    for(int i=0;i<n;i++) {
        if(s[i]=='1') {
            cnt++;
            ans.pb(i+1);
        }
        else ans1.pb(i+1);
    }
    if(cnt%2==1&&n%2==1) {
        cout << -1 << '\n';
    }
    else {
        if(cnt%2==1) cout << n-cnt << '\n';
        cout << cnt << '\n';
        if(cnt%2==0) {
            for(auto x:ans) {
                cout << x << ' ';
            }
        }
        else {
            for(auto x:ans1) {
                cout << x << ' ';
            }
        }
        if(cnt!=0) cout << '\n';
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
