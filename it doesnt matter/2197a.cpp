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
    int x;cin>>x;
    if(x%9!=0) {
        cout << 0 << '\n';
        return;
    }
    for(int i=x+1;i<=x+1000;i++) {
        int sum=0;
        int tmp=i;
        while(tmp!=0) {
            int y=tmp%10;
            sum+=y;
            tmp/=10;
        }
        if(i-sum==x) {
            cout << 10 << '\n';
            return;
        }
    }
    cout << 0 << '\n';
}

int main() {
    suffering_leaves_suffering_leaves
    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
