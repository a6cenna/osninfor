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
    for(auto &x:a)cin>>x;
    bool ada=0;
    int bisa=true;
    int cur=a[0];
    for(int i=1;i<n;i++) {
        // if(!ada) {
        //     if(a[i]<=a[i-1]) ada=1;

        // }
        // else {
        //     if(a[i]>a[i-1]) bisa=false;
        // }
        if(a[i]>=cur*2) bisa=false;
        cur=min(cur, a[i]);
    }
    if(bisa) {
        cout << "YES";
    }
    else cout << "NO";
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
