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
    int first=-1, last=n, freq=0;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        if(a[i]==1) freq++;
        if(first==-1 && a[i]==1) first=i;
    }
    for (int i=n-1;i>=0;i--) {
        if(last==n && a[i]==1) last=i;
    }

    cout << last-first-freq+1 << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
