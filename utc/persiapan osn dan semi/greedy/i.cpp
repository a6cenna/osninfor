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

void solve() {
    int n,m;cin>>n>>m;
    int d[n],a[m+1];
    for(int i=0;i<n;i++) cin>>d[i];
    for(int i=1;i<=m;i++) cin>>a[i];
    int l=1, r=n;
    int ans=-1;
    while(l<=r) {
        int mid=(l+r)/2;
        int sisa=0;
        int cnt=0;
        vector<int> udah(m+1, 0);
        for(int i=mid-1;i>=0;i--) {
            if(d[i]!=0&&!udah[d[i]]) {
                sisa+=a[d[i]];
                udah[d[i]]=1;
                cnt++;
            }
            else if(sisa>0){
                sisa--;
            }
        }            
        if(sisa==0&&cnt==m) {
            r=mid-1;
            ans=mid;
        }
        else l=mid+1;
    }

    cout << ans << '\n';
}

int main() {
    war_without_reason

    solve();
}
