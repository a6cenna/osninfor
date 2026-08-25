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

const int N=1e5;
int n;

vector<int> BIT(N+5);

int query(int idx) {
    int ret=0;
    for(int i=idx;i!=0;i-=(i&(-i))) ret+=BIT[i];

    return ret;
}

void update(int idx, int val) {
    for(int i=idx;i<=n;i+=(i&(-i))) BIT[i]+=val;
}

void solve() {
    cin>>n;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++) {
        cin>>a[i];
        update(i, a[i]);
    }
    int q;cin>>q;
    while(q--) {
        int tipe;cin>>tipe;
        if(tipe==0) {
            int idx,val;cin>>idx>>val;
            update(idx, val);
        }
        else {
            int l,r;cin>>l>>r;
            cout << query(r)-query(l-1) << '\n';
        }
    }
}

int main() {
    war_without_reason

    solve();
}
