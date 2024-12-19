#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, x;cin>>n>>x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    map<int, int> idx;
    for (int i = 1; i <= n; i++)
    {
        if(idx.count(x-a[i-1])) {
            cout << i << " " << idx[x-a[i-1]];
            return;
        }
        idx[a[i-1]] = i;
    }
    cout << "IMPOSSIBLE";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
