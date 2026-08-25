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

vector<bool> prima(1e6+5,1);
vector<int> nilai_prima;

void solve() {
    int n;cin>>n;
    int tmp=n;
    map<int,int> mp;
    for(auto p:nilai_prima) {
        if(p*p>n) break;
        while(n%p==0) {
            mp[p]++;
            n/=p;
        }
    }
    if(n>1) mp[n]++;
    cout << tmp << " = ";
    int cur=1;
    for(auto [x,y]:mp) {
        cout << x << " ^ " << y << (cur==mp.size()?"":" * ");
        cur++;
    }
}

signed main() {
    war_without_reason
    prima[1]=0;
    for(int i=2;i<=1e6;i++) {
        if(!prima[i]) continue;
        nilai_prima.pb(i);
        for(int j=2;j*i<=1e6;j++) {
            prima[i*j]=0;
        }
    }

    solve();
}
