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
    int n,q;cin>>n>>q;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int cnt[n+1];
    memset(cnt,0,sizeof(cnt));
    for(int i=0;i<n;i++) {
        if(a[i]<=n) cnt[a[i]]++;
    }
    set<int> st;
    for(int i=0;i<=n;i++) {
        if(cnt[i]==0) st.insert(i);
    }
    while(q--) {
        int i,x;cin>>i>>x;
        i--;
        if(a[i]<=n) {
            cnt[a[i]]--;
            if(cnt[a[i]]==0) st.insert(a[i]);
        }
        if(x<=n) cnt[x]++;
        st.erase(x);
        a[i]=x;

        cout << *st.begin() << '\n';
    }
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
