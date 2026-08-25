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

void solve() {
    int n,k;cin>>n>>k;
    vector<pii> wh(k+1); // weight, value
    for(int i=1;i<=k;i++) {
        cin>>wh[i].fs>>wh[i].sc;
    }

    vector<vector<int>> way(n+1);
    vector<int> dp(n+1);

    for(int i=1;i<=k;i++) {
        int w=wh[i].fs;
        int h=wh[i].sc;
        for(int j=n;j>=1;j--) {
            vector<int> nxt;
            if(j-w>=0) {
                nxt=way[j-w];
                nxt.pb(i);
            }
            if(j-w>=0&&dp[j-w]+h>dp[j]||(dp[j-w]+h==dp[j]&&nxt<way[j])) {
                dp[j]=dp[j-w]+h;
                way[j]=nxt;
            }
        }
    }

    int pilih=n;
    while(pilih-1>=0&&dp[pilih]==dp[pilih-1]) pilih--;

    for(auto x:way[pilih]) {
        cout << x << '\n';
    }
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
