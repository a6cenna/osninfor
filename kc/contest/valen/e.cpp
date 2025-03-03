#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n,a,b,t;cin>>n>>a>>b>>t;
    string a1,a2;cin>>a1>>a2;
    if(a1=="kanan") {
        if(n-max(a,b) + abs(b-a)-1!=0) {
            cout << t/(n-max(a,b) + abs(b-a)-1);
            return;
        }
        
    }
    else {
        if(n-max(a,b) + abs(b-a)-1!=0) {
            cout << t/(n-max(a,b) + abs(b-a)-1);
            return;
        }
    }
    cout << 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
