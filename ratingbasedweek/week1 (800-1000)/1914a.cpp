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
    string s;cin>>s;
    int freq[26];
    memset(freq, 0, sizeof(freq));
    for(int i=0;i<n;i++) {
        freq[s[i]-'A']++;
    }
    int ans=0;
    for(int i=0;i<26;i++) {
        if(freq[i]>=i+1) ans++;
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
