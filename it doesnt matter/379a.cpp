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
    int a,b;cin>>a>>b;
    int cur=a;
    int ans=0;
    int tmp=0;
    while(cur!=0) {
        ans+=cur;
        tmp+=cur;
        cur=tmp/b;
        tmp%=b;
    }
    cout << ans << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
