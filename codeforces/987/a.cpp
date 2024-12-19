#include <bits/stdc++.h>

using namespace std;

void solve() {
    // search the max within 50 number, then output n-max

    int n;cin>>n;
    vector<int> a(51, 0);
    for (int i = 0; i < n; i++)
    {
        int x;cin>>x;
        a[x]++;
    }
    cout << n-*max_element(a.begin(), a.end()) << '\n';
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
