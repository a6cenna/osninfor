#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    long long a,b;cin>>a>>b;
    bool geo=true;
    long long prev=b;
    for(int i=2;i<n;i++) {
        long long x;cin>>x;
        // b/a==x/prev -> b*prev==x*a
        if(b*prev!=x*a) {
            geo=false;
        }
        prev=x;
    }
    cout << (geo ? "Yes" : "No");
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
