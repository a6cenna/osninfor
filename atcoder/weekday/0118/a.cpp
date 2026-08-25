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
    int n,m;cin>>n>>m;
    vector<int> s(m);
    n--;
    for(int i=0;i<m;i++) cin>>s[i];
    int ok=1;
    while(n--) {
        int x;
        for(int i=0;i<m;i++) {
            cin>>x;
            if(s[i]==-1) s[i]=x;
            else if(x==-1) continue;
            else if(s[i]!=x) ok=0;
        } 
    }

    cout << (ok?"Yes":"No") << '\n';
}

int main() {
    war_without_reason

    solve();
}
