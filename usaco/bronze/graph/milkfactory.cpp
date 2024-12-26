#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("factory.in", "r", stdin);
    freopen("factory.out", "w", stdout);

    int n;cin>>n;
    vector<vector<int>> adj(n+1);
    for (int i = 0; i < n-1; i++)
    {
        int x,y;cin>>x>>y;
        adj[x].push_back(y);
    }
    int a=-1;
    for (int i = 1; i <= n; i++)
    {
        if(adj[i].size()==0 && a==-1) {
            a=i;
        }
        else if (adj[i].size()==0){
            cout << -1;
            return 0;
        }
    }
    cout << a;
}
