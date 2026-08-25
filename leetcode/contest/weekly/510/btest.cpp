// war without reason

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
    vector<int> nums;
    for(int i=0;i<n;i++) {
        int x;cin>>x;
        nums.pb(x);
    }
    ll cur=k;
    ll cost=0;
    int rn=0;
    for(int i=0;i<n;i++) {
        ll tmp=nums[i];
        ll bisa=min(cur, tmp);
        tmp-=bisa;
        cur-=bisa;
        if(tmp>0) {
            ll cnt=tmp/k+1;
            cost+=(((rn+cnt)*(rn+cnt+1))/2-cost);
            rn+=cnt;
            cur=cnt*k;
            bisa=min(tmp,cur);
            cur-=bisa;
        }
    }

    cout << cost << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
