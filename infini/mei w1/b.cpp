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
    int n,k;cin>>n>>k;
    string s;cin>>s;
    if(k%2==0) {
        sort(s.begin(), s.end());
        cout << s << '\n';
        return;
    }
    string ev,od;
    for(int i=0;i<n;i++) {
        if(i%2==0) ev+=s[i];
        else od+=s[i];
    }
    sort(ev.begin(), ev.end());
    sort(od.begin(), od.end());
    for(int i=0;i<n;i++) {
        if(i%2==0) cout << ev[i/2];
        else cout << od[i/2];
    }
    cout << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
