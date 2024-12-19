#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n,k;cin>>n>>k;
    vector<vector<int>> rem(k);
    int ans=-1;
    for(int i=0;i<n;i++) {
        int x;cin>>x;
        rem[x%k].push_back(i);
    }

    for (auto r:rem)
    {
        if(r.size()==1) {
            ans=r[0]+1;
            break;
        }
    }
    if(ans==-1) {
        cout << "NO" << '\n';
    }
    else {
        cout << "YES" << '\n';
        cout << ans << '\n';
    }
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
