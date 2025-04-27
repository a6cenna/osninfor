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
    int n,m,q;cin>>n>>m>>q;
    int a[n];
    int b[m];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    int l=0;
    bool yes=true;
    set<int> pending;
    int curr=0;
    for(int i=0;i<m;i++) {
        if(!pending.count(b[i])){
            pending.insert(b[i]);
            if(a[curr]!=b[i]){
                yes=false;
                break;
            }
            curr++;
        }
    }
    cout<<(yes?"YA\n":"TIDAK\n");
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
