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
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    vector<ll> suff(n+1, 0);
    vector<int> pmax(n+1, 0);
    for(int i=1;i<=n;i++) {
        suff[i]+=suff[i-1]+a[n-i];
        pmax[i]=max(pmax[i-1], a[i-1]);
    }
    for(int i=0;i<n;i++) {
        cout << suff[i]+pmax[n-i] << ' ';
    }
    // priority_queue<int, vector<int>, greater<int>> pq;
    // for(int i=0;i<n;i++) {
    //     pq.push(a[n-i-1]);
    //     if(a[i]>pq.top()) {
    //         cout << suff[i+1]-pq.top()+a[i] << ' ';
    //     }
    //     else cout << suff[i+1] << ' ';
    // }

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
