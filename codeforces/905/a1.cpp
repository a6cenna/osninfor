#include <bits/stdc++.h>

using namespace std;

string num="1234567890";

void solve() {
    int last=0;
    int ans=0;
    int i=4;
    char c;
    while(i--){
        cin>>c;
        ans+=abs((int)num.find(c)-last)+1;
        last=num.find(c);
    }
    cout << ans <<'\n';
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
