// war without reason

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
    int n,c;cin>>n>>c;
    int a[n],b[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    int sum=0;
    int ok=1;
    for(int i=0;i<n;i++) {
        if(b[i]>a[i]) {
            ok=0;
            break;
        }
        else {
            sum+=(a[i]-b[i]);
        }
    }
    int tmp=c;
    sort(a,a+n);
    sort(b,b+n);
    int ok1=1;
    for(int i=0;i<n;i++) {
        if(b[i]>a[i]) {
            ok1=0;
            break;
        }
        else {
            tmp+=(a[i]-b[i]);
        }
    }
    if(ok) {
        cout << min(tmp,sum) << '\n';
    }
    else if(ok1) cout << tmp << '\n';
    else cout << -1 << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
