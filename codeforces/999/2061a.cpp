// author: sofwant || a6cenna
// created at (date)
// suffering leaves suffering leaves.

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
    int odd=0,ev=0;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x%2==0)ev++;
        else odd++;
    }
    if(ev>0&&odd>0) {
        cout << 1+odd;
    }
    else if(odd==0){
        cout << 1;
    }
    else if(ev==0) {
        cout<<odd-1;
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
