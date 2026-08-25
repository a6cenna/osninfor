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
    int n,c;cin>>n>>c;
    vector<int> minus,plus;
    for(int i=0;i<n;i++) {
        int x;cin>>x;
        if(x>=0) plus.pb(x);
        else minus.pb(x);
    }
    int ans=0;
    sort(plus.begin(), plus.end(), greater<int>());
    while(!minus.empty()&&!plus.empty()) {
        ans-=c;
        minus.pop_back();
        ans+=plus[plus.size()-1];
        plus.pop_back();
    }
    for(int i=1;i<minus.size();i+=2) {
        ans-=c;
        ans+=max(minus[i], minus[i-1]);
    }
    if(!minus.empty()&&minus.size()%2==1) {
        ans-=c;
        ans+=minus[minus.size()-1];
    }
    for(int i=1;i<plus.size();i+=2) {
        ans+=max(-c+(max(plus[i], plus[i-1])), -2*c+plus[i]+plus[i-1]);
    }
    if(!plus.empty()&&plus.size()%2==1) {
        ans-=c;
        ans+=plus[plus.size()-1];
    }

    cout << ans << '\n';
}

signed main() {
    war_without_reason

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
