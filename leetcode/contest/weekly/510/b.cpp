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

class Solution {
public:
    #define int ll
    int minimumCost(vector<int>& nums, int k) {
        int n=nums.size();
        ll cur=k;
        ll cost=0;
        ll rn=0;
        ll mod=1e9+7;
        for(int i=0;i<n;i++) {
            ll tmp=nums[i];
            ll bisa=min(cur, tmp);
            tmp-=bisa;
            cur-=bisa;
            if(tmp>0) {
                ll cnt=tmp/k+1;
                cost=(cost+(((rn+cnt)*(rn+cnt+1))/2-cost))%mod;
                rn+=cnt;
                cur=cnt*k;
                bisa=min(tmp,cur);
                cur-=bisa;
            }
        }

        return cost%mod;
    }
};
