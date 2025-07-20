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
    int n,k;cin>>n>>k;
    string s;cin>>s;
    int freq[2];
    memset(freq,0,sizeof(freq));
    for(int i=0;i<n;i++) freq[s[i]-'0']++;
    
    cout << (freq[1]>k&&n>=2*k?"Bob":"Alice") << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
