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
    string s;cin>>s;
    int a[n];
    for(auto &x:a)cin>>x;
    int ans=-1;
    int l=0;
    int r=1e9;
    while(l<=r) {
        int mid=(l+r)/2;
        int cnt=0;
        char last='R';
        for(int i=0;i<n;i++) {
            if(a[i]>mid) {
                if(s[i]=='B'&&last=='R')cnt++;
                last=s[i];
            }
        }
        if(cnt<=k) {
            r=mid-1;
            ans=mid;
        } 
        else l=mid+1;
    }

    cout << ans << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
