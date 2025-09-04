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
    n*=4;
    string s;cin>>s;
    vector<int> freq(4,0);
    for(int i=0;i<n;i++) {
        if(s[i]!='?') freq[s[i]-'A']++;
    }
    int ans=0;
    for(int i=0;i<4;i++) {
        ans+=min(n/4, freq[i]);
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
