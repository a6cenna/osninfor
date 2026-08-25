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
    int n;cin>>n;
    vector<int> cnt(n+1, 0);
    int cur[4];
    cur[1]=1;
    cur[2]=2;
    cur[3]=3;
    while(n--) {
        int a,b,g;cin>>a>>b>>g;
        swap(cur[a], cur[b]);
        cnt[cur[g]]++;
    }
    cout << max({cnt[1],cnt[2],cnt[3]}) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);

    solve();
}
