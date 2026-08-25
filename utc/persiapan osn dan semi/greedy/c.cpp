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
    int a[n],b[m];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    int cur=0;
    int ans=0;
    for(int i=0;i<n&&cur<m;i++) {
        if(a[i]>b[cur]){
            while(cur+1<m&&a[i]>b[cur]) cur++;
            // cout << a[i] << ' ' << b[cur] << '\n';
        }
        if(a[i]==b[cur]||a[i]==b[cur]-1)  {
            // cout << a[i] << ' ' << b[i] << '\n';
            ans++;
            cur++;
        }
    }

    cout << ans << '\n';
}

int main() {
    war_without_reason

    solve();
}
