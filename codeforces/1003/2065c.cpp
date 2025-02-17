#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n,m;cin>>n>>m;

    int a[n], b;
    for(int i=0;i<n;i++) {cin>>a[i];}
    cin>>b;
    int curr=INT_MIN;
    int possible=true;
    for(int i=0;i<n;i++) {
        int maxx=max(a[i], b-a[i]);   
        int minn=min(a[i], b-a[i]);

        if(minn>=curr) curr=minn;
        else if(maxx>=curr) curr=maxx;
        else {
            possible=false;
            break;
        }
    }

    cout << (possible ? "YES" : "NO") << '\n';
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
