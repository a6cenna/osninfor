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

const ll MOD=1e9+7;

void solve() {
    int n;cin>>n;
    string s;cin>>s;
    ll ans=1;
    int c[26]={0};
    for(auto x:s){
        c[x-'a']++;
    }
    for(int i=0;i<26;i++) ans=ans*(c[i]+1)%MOD;
    cout << ans-1 << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
