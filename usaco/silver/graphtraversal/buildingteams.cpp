#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> adj;
vector<int> color;

bool bisa=true;

void dfs(int x, int c) {
    if(color[x]!=-1) return; 
    color[x]=c;
    int nc=!c;
    for(auto node:adj[x]) {
        if(color[node]!=-1) {
            if(color[node]==c) {
                bisa=false;
                return;
            }
        }
        else {
            dfs(node, nc);
        }
    }
}

void solve() {
    int n,m;cin>>n>>m;
    adj.resize(n+1);
    color.resize(n+1, -1);
    while(m--) {
        int x,y;cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(1, 0);
    for (int i = 2; i <= n; i++)
    {
        if(color[i]==-1) {
            dfs(i, 0);
        }
    }
    
    if(!bisa) cout << "IMPOSSIBLE";
    else {
        for(int i=1;i<=n;i++) {
            cout << color[i]+1 << " ";
        }
        cout << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
