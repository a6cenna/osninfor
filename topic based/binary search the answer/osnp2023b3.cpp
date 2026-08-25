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
    int n,p,q;cin>>n>>p>>q;
    int e[n];
    for(int i=0;i<n;i++) cin>>e[i];
    vector<pii> v(q);
    for(int i=0;i<q;i++) {
        int x;cin>>x;
        v[i]={e[x-1],i};
    }
    sort(v.begin(), v.end());
    vector<int> ans(q,0);
    sort(e,e+n);
    vector<int> mx(n),L(n);
    int l=0;
    for(int r=0;r<n;r++) {
        while(e[r]-e[l]>p) l++;
        mx[r]=r-l+1;
        L[r]=l;
    }
    deque<int> dq;
    int r=0;
    for(int i=0;i<q;i++) {
        while(!dq.empty()&&e[dq.front()]<v[i].fs) dq.pop_front();
        while(r<n&&e[L[r]]<=v[i].fs) {
            while(!dq.empty()&&mx[dq.back()]<=mx[r]) dq.pop_back();
            dq.pb(r);
            r++;
        }
        ans[v[i].sc]=mx[dq.front()];
    }

    for(int i=0;i<q;i++) {
        cout << ans[i] << '\n';
    }
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
