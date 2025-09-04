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
    int n;cin>>n;
    vector<int> odd;
    vector<int> even;
    for(int i=0;i<n;i++) {
        int x;cin>>x;
        if(x%2==0) even.pb(x);
        else odd.pb(x);
    }
    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());

    int ans=INT_MAX;
    if(!even.empty()) {
        int temp=0;
        for(auto &x:odd) {
            if(x<even.front()) temp++;
            if(x>even.back()) temp++;
        }
        ans=min(ans,temp);
    }
    if(!odd.empty()) {
        int temp=0;
        for(auto &x:even) {
            if(x<odd.front()) temp++;
            if(x>odd.back()) temp++;
        }
        ans=min(ans,temp);
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
