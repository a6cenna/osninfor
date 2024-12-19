#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("whereami.in", "r", stdin);
    freopen("whereami.out", "w", stdout);

    int n;cin>>n;
    string s;cin>>s;
    set<char> c;
    for (int i = 0; i < n; i++)
    {
        c.insert(s[i]);
    }
    cout << c.size();
}
