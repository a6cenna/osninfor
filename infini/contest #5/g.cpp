// in the pool

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
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int s=0;
    vector<bool> used(n, 0);
    used[0]=1;
    for(int i=0;i<k;i++) {
        if(a[n-1-s]>n) {
            cout << "NO" << '\n';
            return;
        }
        s+=a[(n-1-s)%n];
        s%=n;
        if(!used[s]) used[s]=1;
        else {
            cout << "YES" << '\n';
            return;
        }
    }
    cout << "YES" << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
