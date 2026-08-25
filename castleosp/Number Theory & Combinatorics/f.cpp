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

vector<int> nilai_prima;
vector<bool> prima(1005, 1);

void solve() {
    int n,k;cin>>n>>k;
    int ans=0;
    for(int i=1;i<=n;i++) {
        if(nilai_prima[i]+nilai_prima[i-1]+1>n) break;
        if(prima[nilai_prima[i]+nilai_prima[i-1]+1]) ans++;
    }

    cout << (ans>=k?"YES":"NO") << '\n';
}

int main() {
    war_without_reason
    prima[1]=0;
    for(int i=2;i<=1000;i++) {
        if(!prima[i]) continue;
        nilai_prima.pb(i);
        for(int j=2;i*j<=1005;j++) {
            prima[i*j]=0;
        }
    }

    solve();
}
