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
    string s;cin>>s;
    int n=s.length();
    int bal=0;
    vector<pii> a;
    for(int i=0;i<n;i++) {
        a.pb({bal,-i});
        if(s[i]=='(') bal++;
        else bal--;
    }
    sort(a.begin(),a.end());
    for(auto x:a) {
        cout << s[-x.sc];
    }
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
