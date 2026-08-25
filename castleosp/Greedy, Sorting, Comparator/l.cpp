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

void solve() {
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    set<int> st;
    for(int i=0;i<n;i++) {
        if(a[i]-1>0&&!st.count(a[i]-1)) {
            st.insert(a[i]-1);
        }
        else if(!st.count(a[i])) st.insert(a[i]);
        else if(!st.count(a[i]+1)) st.insert(a[i]+1);
    }

    cout<< st.size() << '\n';
}

int main() {
    war_without_reason

    solve();
}
