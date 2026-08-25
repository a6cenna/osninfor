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
    int q;cin>>q;
    multiset<int> sl,sr;
    while(q--) {
        char c;cin>>c;
        int l,r;cin>>l>>r;
        if(c=='-') {
            sl.erase(sl.find(l));
            sr.erase(sr.find(r));
        }
        else {
            sl.insert(l);
            sr.insert(r);
        }
        if(!sl.empty()) {
            cout << (*sl.rbegin()>*sr.begin()?"YES":"NO") << '\n';
            continue;
        }
        cout << "NO\n";
    }
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
