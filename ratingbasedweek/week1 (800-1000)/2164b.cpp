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
    vector<int> odd,ev;
    for(int i=0;i<n;i++) {
        int x;cin>>x;
        if(x%2==0)ev.pb(x);
        else odd.pb(x);
    }
    int len=odd.size();
    if(ev.size()>1) {
        cout << ev[0] << ' ' << ev[1] << '\n';
        return;
    } 
    else if(ev.size()==1) {
        for(int i=0;i<len;i++) {
            if((max(ev[0], odd[i])%min(ev[0], odd[i]))%2==0) {
                cout << min(ev[0], odd[i]) << ' ' << max(ev[0], odd[i]) << '\n';
                return;
            }
        }
    }
    for(int i=0;i<len;i++) {
        for(int j=i+1;j<len;j++) {
            if((odd[j]%odd[i])%2==0) {
                cout << odd[i] << ' ' << odd[j] << '\n';
                return;
            }
        }
    }
    cout << -1 << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
