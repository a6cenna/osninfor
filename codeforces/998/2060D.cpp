#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }

    for(int i=0;i<n-1;i++) {
        if(a[i]<=a[i+1]) {
            a[i+1]-=a[i];
            a[i]-=a[i];
        }
        else {
            a[i]-=a[i+1];
            a[i+1]-=a[i+1];
        }
    }

    bool possible=true;
    for(int i=0;i<n-1;i++) {
        if(a[i]>a[i+1])  {
            possible=false;
            break;
        }
    }

    if(possible) cout << "YES" << '\n';
    else cout << "NO" << '\n';
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
