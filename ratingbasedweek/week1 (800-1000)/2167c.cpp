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
    bool odd=0,ev=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0) ev=1;
        else odd=1;
    }
    if(odd&&ev) {
        sort(a,a+n);
        for(int i=0;i<n;i++) cout << a[i] << ' ';
    }
    else {
        for(int i=0;i<n;i++) cout << a[i] << ' ';
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
