#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;cin>>n>>m;
    multiset<int> h;
    int t[m];
    for (int i = 0; i < n; i++)
    {
        int x;cin>>x;
        h.insert(x);
    }
    for(int i=0;i<m;i++) {
        cin>> t[i];
        auto it = h.upper_bound(t[i]);
        if(it==h.begin()) {cout << -1 << '\n';}
        else {
            cout << *(--it) << '\n';
            h.erase(it);
        }
    }


}
