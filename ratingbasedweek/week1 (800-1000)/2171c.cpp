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
    int a[n],b[n];
    int res=0;
    for(int i=0;i<n;i++) cin>>a[i], res^=a[i];
    for(int i=0;i<n;i++) cin>>b[i], res^=b[i];
    int aji=0,mai=0;
    int mvp=-1;
    for(int i=0;i<n;i+=2) {
        if(a[i]!=b[i]) {
            mvp=i;
        }
    }
    for(int i=1;i<n;i+=2) {
        if(a[i]!=b[i]) {
            mvp=max(mvp,i);
        }
    }
    if(!res) {
        cout << "Tie\n";
        return;
    }
    cout << (mvp%2==0?"Ajisai":"Mai") << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
