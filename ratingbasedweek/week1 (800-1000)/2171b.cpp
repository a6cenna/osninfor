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
    for(int i=0;i<n;i++) {
        cin>>a[i];
        if(a[i]==-1&&i!=0&&i!=n-1) a[i]=0;
    }
    if(a[n-1]==-1&&a[0]==-1) {
        a[n-1]=0;
        a[0]=0;
        cout << 0 << '\n';
        for(int i=0;i<n;i++) {
            cout << a[i] << ' ';
        }
    }
    else {
        cout << abs((a[n-1]==-1?a[n-1]=a[0]:a[n-1])-(a[0]==-1?a[0]=a[n-1]:a[0])) << '\n';
        for(int i=0;i<n;i++) {
            cout << a[i] << ' ';
        }
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
