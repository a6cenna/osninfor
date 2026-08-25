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
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    vector<int> pref1(n+1, 0), pref2(n+1, 0);
    for(int i=1;i<=n;i++) {
        pref1[i]=(a[i-1]==1?1:-1);
        pref2[i]=(a[i-1]==1||a[i-1]==2?1:-1);
    }
    for(int i=1;i<=n;i++) {
        pref1[i]+=pref1[i-1];
        pref2[i]+=pref2[i-1];
    }
    int mn=INT_MAX;
    for(int i=1;i<n;i++) {
        if(pref2[i]>=mn) {
            cout << "YES\n";
            return;
        }
        if(pref1[i]>=0) mn=min(mn, pref2[i]);
    }
    cout << "NO\n";
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
