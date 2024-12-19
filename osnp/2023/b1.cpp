#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n,m;cin>>n>>m;
    int b[m];
    long long sum=0;
    long long sumb=0;    
    for (int i = 0; i < n; i++)
    {
        int x;cin>>x;
        sum+=x;
    }
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
        sumb+=b[i];
    }
    sort(b,b+m);
    if(sumb*n<sum*m) {
        cout << 0;
        return;
    }
    long long ans=0;
    for (int i = m-1; i > 0; i--)
    {
        sum+=b[i];
        sumb-=b[i];
        ans+=b[i];
        n++;
        m--;
        if(sumb*n<sum*m && (b[i]!=b[i-1])) {
            cout << ans;
            return;
        }
    }
    

    cout << -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
