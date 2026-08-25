// war without reason

#include <bits/stdc++.h>
using namespace std;

#define war_without_reason ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back
#define int ll

void solve() {
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    vector<int> prefod(n+1,0),prefev(n+1,0);
    set<int> st;
    for(int i=1;i<=n;i++) {
        prefod[i]=prefod[i-1]+(i%2?a[i-1]:0);
        prefev[i]=prefev[i-1]+(i%2==0?a[i-1]:0);
        if(st.count(prefev[i]-prefod[i])||prefev[i]-prefod[i]==0) {
            cout << "YES\n";
            return;
        }
        st.insert(prefev[i]-prefod[i]);
    }
    cout << "NO\n";
}

signed main() {
    war_without_reason

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
