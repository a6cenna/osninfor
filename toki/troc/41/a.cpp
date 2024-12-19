#include <bits/stdc++.h>

using namespace std;

void solve() {
    int l, w, a;cin>>l>>w>>a;
    int luas=l*w;
    while(luas>a && luas%2==0) {
        luas/=2;
    }
    if(luas==a) cout << "YA";
    else cout << "TIDAK";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
