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
#define int ll

string s;

set<int> st;

void cari(int cur, int idx) {
    if(idx==s.length()) {
        st.insert(cur);
        return;
    }
    int sum=0;
    for(int i=idx;i<s.length();i++) {
        sum=sum*10+(s[i]-'0');
        
        if(idx==0) cari(sum, i+1);
        else {
            cari(cur+sum,i+1);
            cari(cur-sum,i+1);
        }
    }
}

void solve() {
    cin>>s;
    int n=s.length();
    
    cari(0, 0);

    cout << st.size() << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    solve();
}
