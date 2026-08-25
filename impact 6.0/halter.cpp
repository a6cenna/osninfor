// war without reason

#include <bits/stdc++.h>
using namespace std;

#define war_without_reason ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back

const int MAXN=3e5;
const int MAXLOGN=19;
vector<vector<int>> spt(MAXLOGN+5, vector<int>(MAXN+5));

int query(int l, int r) {
    int len=r-l+1;
    int ans=0;
    for(int k=MAXLOGN;k>=0;k--) {
        if((len>>k)&1) {
            ans=gcd(ans,spt[k][l]);
            l+=(1<<k);
        }
    }

    return ans;
}

void solve() {
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) {
        cin>>a[i];
        spt[0][i]=a[i];
    }

    for(int k=1,len=2;len<=n;k++,len*=2) {
        for(int i=0;i<n;i++) {
            spt[k][i]=gcd(spt[k-1][i],spt[k-1][i+len/2]);
        }
    }

    cout << query(3, 5) << '\n';
}

int main() {
    war_without_reason

    solve();
}
