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
    int one=0;
    int sum=0;
    for(int i=0;i<n;i++) {
        if(s[i]=='1')one++;
    }
    for(int i=0;i<n;i++) {
        if(s[i]=='1') sum+=one-1;
        else sum+=one+1;
    }
    cout << sum << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
