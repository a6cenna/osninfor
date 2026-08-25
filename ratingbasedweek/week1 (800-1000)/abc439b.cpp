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
    int prevn=INT_MAX;
    set<int>st;
    while(!st.count(n)) {
        st.insert(n);
        prevn=n;
        if(n==1) {
            cout << "Yes\n";
            return;
        }
        int tmp=0;
        while(n/10>0) {
            tmp+=(n%10)*(n%10);
            n/=10;
            // cout << (n%10)*(n%10) << " dbg\n";
            // cout << tmp << " dbg2\n";
        }
        tmp+=(n%10)*(n%10);
        n=tmp;
    }
    cout << "No\n";
}

int main() {
    suffering_leaves_suffering_leaves

    int t=1;
    // cin >> t;

    while(t--) {
        solve();
    }
}
