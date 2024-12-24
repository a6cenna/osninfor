#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    vector<int> a(n+1, 0);
    for (int i = 0; i < n; i++)
    {
        int x;cin>>x;
        a[x]++;
    }
    int full=0;
    int notfull=0;
    for(int i=1;i<=n;i++) {
        if(a[i]==1) full++;
        else if (a[i]>1){
            notfull++;
        }
    }

    cout <<  ((full+1)/2)*2 + notfull << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
