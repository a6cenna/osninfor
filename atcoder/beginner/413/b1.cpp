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
    string s[n];
    set<string> st;
    for(int i=0;i<n;i++) cin>>s[i];
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(i!=j) st.insert(s[i]+s[j]);
        }
    }
    cout << st.size();
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
