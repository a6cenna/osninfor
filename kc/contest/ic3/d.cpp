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
    int cnt0=0,cnt1=0;
    for(int i=0;i<n-1;i++) {
        if(s[i]=='0'&&s[i+1]=='0')cnt0++;
        if(s[i]=='1'&&s[i+1]=='1')cnt1++;
    }
    cout << max(cnt0,cnt1) << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
