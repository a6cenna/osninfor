#include <bits/stdc++.h>

using namespace std;

vector<set<int>> adj;
vector<bool> visited;

void dfs(int node, vector<int>& component) {
    visited[node] = true;
    component.push_back(node);
    for (int a : adj[node]) {
        if (!visited[a]) {
            dfs(a, component);
        }
    }
}

void solve() {
    int n;
    cin >> n;

    adj.clear();
    adj.resize(n + 1);
    visited.assign(n + 1, false);

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        adj[x].insert(i);
        adj[i].insert(x);
    }

    int c = 0;
    int b = 0;

    for(int i=1;i<=n;i++) {
        if(!visited[i]) {
            bool daun=0;
            vector<int> component;
            dfs(i, component);

            for(auto node:component) {
                if(adj[node].size()==1) {
                    daun=true;
                    b++;
                    break;
                }
            }
            if(!daun) {
                c++;
            }
        }
    }

    cout << c + min(b, 1) << " " << c + b << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}




// #include <bits/stdc++.h>

// using namespace std;

// vector<vector<int>> adj;
// vector<bool> visited;

// vector<vector<int>> connected;
// vector<int> curr;

// void dfs(int node) {
//     if(visited[node]) {
//         // there is a cycle
//         return;
//     }
//     visited[node]=true;
//     curr.push_back(node);
//     for(auto a:adj[node]) {
//         if(!visited[a]) {
//             dfs(a);
//         }
//     }
// }

// bool isCycle(int node) {
//     if(visited[node]) return true;
//     visited[node]=true;
//     for(auto a:adj[node]) {
//         isCycle(a);
//     }
// }

// void solve() {
//     int n;cin>>n;
//     adj.resize(n+1);
//     visited.resize(n+1, 0);
//     // the minimum is a total of connected component that is cycle
//     for (int i = 1; i <= n; i++)
//     {
//         int x;cin>>x;
//         adj[x].push_back(i);
//         adj[i].push_back(x);
//     }
    
//     for(int i=1;i<=n;i++) {
//         if(!visited[i]) {
//             curr.clear();
//             dfs(i);
//             connected.push_back(curr);
//         }
//     }
//     int c=0;
//     fill(visited.begin(), visited.end(), 0);
//     for (auto con:connected)
//     {
//         c+=isCycle(con[0]);
//     }
    
//     cout << c+min((int)connected.size()-c, 1) << " " << connected.size() << '\n';
// }   

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;

//     while(t--) {
//         solve();
//     }
// }
