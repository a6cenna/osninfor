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
    string s;cin>>s;
    set<string> st;
    for(int i=1;i<n;i++) {
        if(!st.count(s.substr(i-1, 2))) {
            st.insert(s.substr(i-1,2));
            if(i+1<n&&s[i]==s[i-1]&&s[i+1]==s[i]) i++;
            continue;
        }
        else {
            cout << "YES\n";
            return;
        }
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
