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
vector<int> MSB(MAXN+5), a(MAXN+5);

// binary lifting O(log N)
// int query(int l, int r) {
//     int len=r-l+1;
//     int ans=0;
//     for(int k=MAXLOGN;k>=0;k--) {
//         if((len>>k)&1) {
//             ans=gcd(ans,spt[k][l]);
//             l+=(1<<k);
//         }
//     }

//     return ans;
// }

// binary lifting O(1)
int query(int l, int r) {
    int k=MSB[r-l+1];

    return gcd(spt[k][l], spt[k][r-(1<<k)+1]);
}

void solve() {
    int n;cin>>n;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        spt[0][i]=a[i];
    }
    MSB[0]=-1;
    MSB[1]=0;
    for(int i=2;i<=MAXN;i++) {
        MSB[i]=MSB[i/2]+1;
    }

    for(int k=1,len=2;len<=n;k++,len*=2) {
        for(int i=0;i+len-1<n;i++) {
            spt[k][i]=gcd(spt[k-1][i],spt[k-1][i+len/2]);
        }
    }
}

int main() {
    war_without_reason

    solve();
}
