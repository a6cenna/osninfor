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
    int n;cin>>n;
    int a[n+1];
    string s;cin>>s;
    for(int i=0;i<n;i++) {
        a[i+1]=s[i]-'0';
    }
    vector<int> right(n+2);
    right[n+1]=0;
    for(int i=n;i>=1;i--) {
        right[i]=right[i+1]+(a[i]==1);
    }
    int ans=-1;
    int left=0;
    int dist=n*2;
    for(int i=0;i<=n;i++) {
        if(i>0&&a[i]==0)left++;
        if(2*left>=i&&right[i+1]*2>=n-i&&abs(n-2*i)<dist) {
            dist=abs(n-2*i);
            ans=i;
        }
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
