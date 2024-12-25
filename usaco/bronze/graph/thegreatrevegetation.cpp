#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("revegetate.in", "r", stdin);
    freopen("revegetate.out", "w", stdout);

    int n,m;cin>>n>>m;
    vector<vector<int>> adj(n+1);
    for (int i = 0; i < m; i++)
    {
        int x,y;cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    vector<int> fields(n+1,0);
    for(int i=1;i<=n;i++) {
        vector<bool> ada(5, true);
        for(auto a:adj[i]) {
            if(fields[a]!=0) {
                ada[fields[a]]=false;
            }
        }
        for(int j=1;j<5;j++) {
            if(ada[j]) {
                fields[i]=j;
                break;
            }
        }
    }   
    for (int i = 1; i <=n; i++)
    {
        cout << fields[i];
    }
    
}
