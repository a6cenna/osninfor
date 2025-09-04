// author: sofwant || a6cenna

#include <bits/stdc++.h>
using namespace std;

#define suffering_leaves_suffering_leaves ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back

void solve() {
    int n,k;cin>>n>>k;
    int ans=0;
    string a;cin>>a;
    int l=0;
    int cur=0;
    for(int i=0;i<n;i++) { 
        cur+=(a[i]=='B');
        if(i-l+1==k) {
            ans=max(ans, cur);
            cur-=(a[l]=='B');
            l++;
        }
    }
    cout << k-ans << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
