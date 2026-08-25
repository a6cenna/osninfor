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
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int ans=0;
    for(int i=1;i<n-1;i++) {
        if(a[i]>a[i-1]&&a[i]>a[i+1]) ans++;
    }

    cout << ans << '\n';
}

int main() {
    war_without_reason

    solve();
}
