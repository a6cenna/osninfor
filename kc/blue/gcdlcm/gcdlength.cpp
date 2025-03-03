#include <bits/stdc++.h>

using namespace std;

void solve() {
    int a,b,c;cin>>a>>b>>c;
    // fix in gcd(x,y)=10^c-1
    // x harusnya punya 10^c-1 dibelakang
    // y harusnya punya 10^c-1 dibelakang
    // perhatiin cuma butuh salah satu x,y aja, yang lain 10^a-1
    cout << 1;
    for (int i = 1; i < a; i++)
    {
        cout << 0;
    }
    cout << ' ';
    for (int i = 0; i < b-(c-1); i++) {
        cout << 1;
    }
    for (int i = 0; i < c-1; i++)
    {
        cout << 0;
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
