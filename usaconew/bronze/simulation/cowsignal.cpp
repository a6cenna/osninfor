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
    int n,m,k;cin>>n>>m>>k;
    char grid[n][m];
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) cin>> grid[i][j];
    }
    for(int i=0;i<n;i++) {
        for(int r=0;r<k;r++) {
            for(int j=0;j<m;j++) {
                for(int l=0;l<k;l++) {
                    cout << grid[i][j];
                }
            }
            cout << '\n';
        }
    }
}

int main() {
    suffering_leaves_suffering_leaves

    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);

    solve();
}
