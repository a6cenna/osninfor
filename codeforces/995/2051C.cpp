#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n,m,k;cin>>n>>m>>k;
    int a[m];
    set<int> b;
    for (int i = 0; i < m; i++)
    {
        cin>>a[i];
    }
    
    for (int i = 0; i < k; i++)
    {
        int x;cin>>x;
        b.insert(x);
    }
    
    if(n>k+1) {
        for(int i=0;i<m;i++) {
            cout << 0;
        }
        cout << '\n';
        return;
    }
    else if(n==k) {
        for(int i=0;i<m;i++) {
            cout << 1;
        }
        cout << '\n';
        return;
    } 
    for (int i = 0; i < m; i++)
    {
        if(!b.count(a[i])) {
            cout << 1;
        }
        else {
            cout << 0;
        }
    }
    cout << '\n';
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
