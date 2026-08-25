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
    int mx=0;
    string s[n];
    for(int i=0;i<n;i++) {
        cin>>s[i];
        mx=max(mx, (int)s[i].length());
    }
    for(auto s1:s) {
        int need=mx-s1.length();
        for(int i=0;i<need/2;i++) cout << '.';
        cout << s1;
        for(int i=0;i<need/2;i++) cout << '.';
        cout << '\n';
    }
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
