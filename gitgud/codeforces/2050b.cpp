#include <bits/stdc++.h>

#define suffering_leaves_suffering_leaves ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

void solve() {
    int n;cin>>n;
    long long sumo=0;
    long long sume=0;
    int x;
    for(int i=1;i<=n;i++) {
        cin>>x;
        if(i%2!=0) {
            sumo+=x;
        }
        else sume+=x;
    }

    cout << (sumo/(n-n/2)==sume/(n/2) && (sumo+sume)%n==0 ? "YES" : "NO") << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
