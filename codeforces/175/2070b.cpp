#include <bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
    int n,x,k;cin>>n>>x>>k;
    string s;cin>>s;
    int l=0,r=0;
    for(int i=0;i<n;i++) {
        k--;
        if(s[i]=='L') x--;
        else x++;
        if(x==0) break;
    }
    int ans=0;
    if(x==0) {
        ans++;
        for(int i=0;i<n;i++) {
            if(s[i]=='L') x--;
            else x++;
            if(x==0) {
                ans+=k/(i+1);
                break;
            }
        }
    }
    cout << ans << '\n'; 
}
#define int int
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
