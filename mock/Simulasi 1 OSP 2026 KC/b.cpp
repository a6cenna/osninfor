#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pii pair<int,int>
#define pb push_back
#define fs first
#define sc second

void solve() {
    int n,k;cin>>n>>k;
    if(k>log2(n)+1) {
        cout << -1 << '\n';
        return;
    }
    vector<int> ans;
    set<int> st;
    int cur=1;
    for(int i=0;i<k;i++) {
        ans.pb(cur);
        st.insert(cur);
        cur*=2;
    }
    reverse(ans.begin(),ans.end());
    for(auto x:ans) cout << x << ' ';
    for(int i=1;i<=n;i++) {
        if(!st.count(i)) cout << i << ' ';
    }
    cout << '\n';
}

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    solve();
}

/*
    kalau selisihnya habis dibagi k:
    maju 1 + maju k kiri kali + mundur 1, kiri+2
*/
