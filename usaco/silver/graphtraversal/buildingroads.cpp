// author: sofwant || a6cenna
// created at 05/04/2025
// suffering leaves suffering leaves.

#include <bits/stdc++.h>
using namespace std;

#define suffering_leaves_suffering_leaves ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back

vector<vector<int>>adj;
vector<bool>visited;

void dfs(int x){
    if(visited[x]) return;
    visited[x]=true;
    for(auto temp:adj[x]) {
        dfs(temp);
    }
}

void solve() {
    int n,m;cin>>n>>m;
    adj.resize(n+1);
    visited.resize(n+1);
    for(int i=0;i<m;i++) {
        int a,b;cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    vector<int>ans;
    for(int i=1;i<=n;i++) {
        if(!visited[i]){
            dfs(i);
            ans.pb(i);
        }
    }
    cout << ans.size()-1 << '\n';
    for(int i=0;i<ans.size()-1;i++){
        cout << ans[i] << ' ' << ans[i+1] << '\n';
    }
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
