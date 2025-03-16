#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n,x;cin>>n>>x;
    int sum=0;
    for(int i=0;i<n;i++) {
        int a;cin>>a;
        sum+=a+1;
        if(sum-1>x) {
            cout << "NO";
            return;
        }
    }
    if(sum-1==x) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
