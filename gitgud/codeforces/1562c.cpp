// author: sofwant || a6cenna
// created at 28/04/2025
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
    int a[n];
    priority_queue<ll, vector<ll>, greater<ll>> pot;
    ll sum=0;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        sum+=a[i];
        pot.push(a[i]);
        while(sum<0) {
            sum-=pot.top();
            pot.pop();
        }
    }
    cout << pot.size() << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
