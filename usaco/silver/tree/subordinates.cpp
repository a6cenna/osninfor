#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> adj;
vector<int> sbsize;

void dfs(int node) {
    sbsize[node]=1;
    for(int child : adj[node]) {
        dfs(child);
        sbsize[node]+=sbsize[child];
    }
}

void solve() {
    int n;cin>>n;
    sbsize.resize(n);
    adj.resize(n);
    for(int i=1;i<n;i++) {
        int x;cin>>x;
        x--;
        adj[x].push_back(i);
    }
    dfs(0);

    for(int i=0;i<n;i++) {
        cout << sbsize[i]-1;
        if(i!=n-1) cout << " ";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
