// in the pool

#include <bits/stdc++.h>
using namespace std;

#define suffering_leaves_suffering_leaves ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back

pii dir[4]={{0,1}, {1,0}, {-1,0}, {0, -1}};

void solve() {
    int h,w;cin>>h>>w;
    char grid[h+1][w+1];
    vector<vector<int>> dist(h+1, vector<int>(w+1, -1));
    map<char, vector<pii>> mp;
    for(int i=1;i<=h;i++) {
        for(int j=1;j<=w;j++) {
            cin>>grid[i][j];
            if(grid[i][j]!='.'&&grid[i][j]!='#') {
                mp[grid[i][j]].pb({i, j});
            }
        }
    }
    queue<pii> q;
    q.push({1,1});
    dist[1][1]=0;
    map<char,bool> used;
    while(!q.empty()) {
        pii cur=q.front();
        q.pop();
        if(grid[cur.fs][cur.sc]!='.'&&!used[grid[cur.fs][cur.sc]]) {
            for(auto x:mp[grid[cur.fs][cur.sc]]) {
                if(dist[x.fs][x.sc]==-1) {
                    dist[x.fs][x.sc]=dist[cur.fs][cur.sc]+1;
                    q.push({x.fs, x.sc});
                }
            }
            used[grid[cur.fs][cur.sc]]=true;
        }
        for(int i=0;i<4;i++) {
            int nx=cur.fs+dir[i].fs;
            int ny=cur.sc+dir[i].sc;
            if(nx<=h&&ny<=w&&nx>=1&&ny>=1&&dist[nx][ny]==-1&&grid[nx][ny]!='#') {
                dist[nx][ny]=dist[cur.fs][cur.sc]+1;
                q.push({nx,ny});
            }
        }
    }

    cout << dist[h][w];
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
