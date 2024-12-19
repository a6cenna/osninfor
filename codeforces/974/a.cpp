#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n,k;
    cin >> n >> k;

    int g=0;
    int ans=0;

    for (int i=0;i<n;i++) {
        int x;
        cin >> x; 
        if (x>0) {
            g+=x;
        }
        else {
            if(g>0 && !x) {
                ans++;
                g--;
            }
        }
    }
    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
