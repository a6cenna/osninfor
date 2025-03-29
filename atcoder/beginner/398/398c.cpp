// author: sofwant || a6cenna
// created at 28/03/2025
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
    unordered_map<int,pii> a;
    int x[n];
    for(int i=0;i<n;i++) {
        cin>>x[i];
        a[x[i]].fs++;
        a[x[i]].sc=i;
    }
    sort(x, x+n);
    for(int i=n-1;i>=0;i--) {
        if(a[x[i]].fs==1) {
            cout << a[x[i]].sc+1 << '\n';
            return;
        }
    }

    cout << -1 << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
