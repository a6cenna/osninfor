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

vector<bool> vis(1e5, false);

void solve() {
    int n,m;cin>>n>>m;
    queue<pii> q;
    q.push({n, 0});
    while(!q.empty()) {
        pii curr=q.front();
        q.pop();
        if(curr.fs==m) {
            cout << curr.sc;
        }
        if(curr.fs*2<=1e5 && !vis[curr.fs*2]) {
            vis[curr.fs*2]=true;
            q.push({curr.fs*2, curr.sc+1});
        }
        if(curr.fs-1>=0 && !vis[curr.fs-1]) {
            vis[curr.fs-1]=true;
            q.push({curr.fs-1, curr.sc+1});
        }
    }
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
