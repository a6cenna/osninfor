#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n,m,k;cin>>n>>m>>k;
    int a[n+1];
    for(int i=1;i<=n;i++) cin>>a[i];
    int oper[m][3];
    for(int i=0;i<m;i++) {
        cin >> oper[i][0] >> oper[i][1] >> oper[i][2];
    }

    vector<long long> sum(m+2);
    vector<long long> add(n+2, 0);
    for(int i=0;i<k;i++) {
        int l,r;cin>>l>>r;
        sum[l]++;
        sum[r+1]--;
    }

    for(int i=1;i<=m;i++) {
        sum[i]+=sum[i-1];

        add[oper[i-1][0]]+=sum[i]*oper[i-1][2];
        add[oper[i-1][1]+1]-=sum[i]*oper[i-1][2];
    }
    for(int i=1;i<=n;i++) {
        add[i]+=add[i-1];
        cout << a[i] + add[i] << " ";
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
