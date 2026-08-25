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
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int ans=0;
    for(int i=2;i<=n;i++) {
        for(int l=0;l<n-i+1;l++) {
            int sum=0;
            for(int j=l;j<l+i;j++) {
                sum+=a[j];
            }
            bool ok=true;
            for(int j=l;j<l+i;j++) {
                if(sum%a[j]==0) ok=false;
            }
            if(ok) ans++;
        }        
    }
    cout << ans << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
