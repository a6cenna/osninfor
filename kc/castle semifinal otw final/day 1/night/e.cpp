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

void solve() {
    int n,k;cin>>n>>k;
    int s[5];
    for(int i=1;i<=4;i++)cin>>s[i];
    int m[k+1][k+1];
    for(int i=1;i<=k;i++) {
        string no;cin>>no;
        for(int j=1;j<=k;j++) m[i][j]=no[j-1]-'0';
    }
    pii r[n+1];
    for(int i=1;i<=n;i++) {
        int x;cin>>x;
        int y=0;
        if(x==1) {
            cin>>y;
        }
        r[i]={x, y};
    }
    int ans=0;
    for(int i=1;i<=n;i++) {
        if(r[i].fs==1) {
            for(int j=1;j<=4;j++) {
                if(m[s[j]][r[i].sc]==1) {
                    ans++;
                    break;
                }
            }
        }
    }

    cout << ans << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
