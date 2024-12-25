#include <bits/stdc++.h>

using namespace std;

string cows[8]= {"Beatrice", "Belinda", "Bella", "Bessie", "Betsy", "Blue", "Buttercup", "Sue"};

void solve() {
    int n;cin>>n;
    map<string,int> cowsy;
    for (int i = 0; i < 8; i++)
    {
        cowsy[cows[i]]=i;
    }
    
    vector<vector<int>> adj(8);
    for (size_t i = 0; i < n; i++)
    {
        string a,b,c;cin>>a>>b>>b>>b>>b>>c;
        adj[cowsy[a]].push_back(cowsy[c]);
        adj[cowsy[c]].push_back(cowsy[a]);
    }
    bool added[8] = {false};
    vector<string> ans;
    for (int i = 0; i < 8; i++)
    {
        if(!added[i] && adj[i].size()<=1) {
            added[i]=true;
            ans.push_back(cows[i]);
            if(adj[i].size()==1) {
                int pre=i;
                int at=adj[i][0];
                while(adj[at].size()==2) {
                    added[at]=true;
                    ans.push_back(cows[at]);
                    int temp = (adj[at][0] == pre ? adj[at][1] : adj[at][0]);
                    pre=at;
                    at = temp;
                }
                added[at]=true;
                ans.push_back(cows[at]);
            }
        }
    }
    
    for (auto s:ans) 
    {
        cout << s << '\n';
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("lineup.in", "r", stdin);
    freopen("lineup.out", "w", stdout);

    solve();
}
