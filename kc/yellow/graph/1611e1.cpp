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

vector<vector<int>> adj;
vector<int> dist; // jarak x (temennya) ke ruang y (alt for visited)
vector<int> distv;

// bool dfs(int curr, int par, int depth) {
//     if(dist[curr]<=depth) return false; // jarak temen lebih cepet
//     if(curr!=1&&adj[curr].size()==1) return true; // nemu leaf
//     for(auto node:adj[curr]) {
//         if(node!=par){
//             if(dfs(node, curr, depth+1)) return true;
//         }
//     } 
//     return false;
// }

void solve() {
    int n,k;cin>>n>>k;
    adj.clear();
    dist.clear();
    distv.clear();
    adj.resize(n+1);
    dist.resize(n+1, -1);
    distv.resize(n+1, -1);

    queue<int> q;
    for(int i=0;i<k;i++) {
        int x;cin>>x;
        q.push(x);
        dist[x]=0;
    }
    for(int i=0;i<n-1;i++) {
        int x,y;cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    while(!q.empty()) {
        int curr=q.front();
        q.pop();
        for(auto node:adj[curr]) {
            if(dist[node]==-1) { // guaranteed closest   
                q.push(node);
                dist[node]=dist[curr]+1;
            }
        }
    }
    // if(dfs(1,0,0)) cout << "YES\n";
    // else cout << "NO\n";

    bool win=false;
    queue<int> qv;
    distv[1]=0;
    qv.push(1);

    while(!qv.empty()) {
        int curr=qv.front();
        qv.pop();
        if(curr!=1&&adj[curr].size()==1) {
            win=true;
            break;
        }
        for(auto node:adj[curr]) {
            if(distv[node]==-1 && distv[curr]+1 < dist[node]){
                distv[node]=distv[curr]+1;
                qv.push(node);
            }
        }
    }
    cout << (win?"YES\n":"NO\n");
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
