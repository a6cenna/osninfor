#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);

    int n;cin>>n;
    int ans;
    int pos[3]={0, 1, 2};
    int count[3]={0};
    while(n--) {
        int a,b,g;cin>>a>>b>>g;
        a--;b--;g--;

        swap(pos[a], pos[b]);
        count[pos[g]]++;
    }
    cout << max({count[0], count[1], count[2]});
}
