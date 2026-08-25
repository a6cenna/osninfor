// in the pool

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
    int n,m;cin>>n>>m;
    string s,t;cin>>s>>t;
    int mn=INT_MAX;
    for(int i=0;i<n-m+1;i++) {
        int cur=0;
        for(int j=i;j<i+m;j++) {
            int x=s[j]-'0';
            int y=t[j-i]-'0';
            if(x==0) x=10;
            if(y==0) y=10;
            if(y>x) cur+=10-y+x;
            else cur+=x-y;
        }
        mn=min(mn, cur);
    }

    cout << mn << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
