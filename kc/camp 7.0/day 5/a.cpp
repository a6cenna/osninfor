// author: sofwant || a6cenna

#include <bits/stdc++.h>
using namespace std;

#define suffering_leaves_suffering_leaves ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define int ll
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back

int n=1e3+5;
pii dir[4]={{0,1}, {1,0}, {-1,0}, {0, -1}};

void solve() {
    vector<vector<int>> bomb(n+1, vector<int>(n+1, 0));
    vector<vector<int>> dist(n+1, vector<int>(n+1, 0));
    vector<vector<bool>> vis(n+1, vector<bool>(n+1, false));
    while(true) {
        int r,c;cin>>r>>c;
        if(r==0&&c==0) break;
        int rb;cin>>rb;
        while(rb--) {
            int rn,b;cin>>rn>>b;
            while(b--) {
                int cl;cin>>cl;
                bomb[rn][cl]=1;
            }
        }
        pii start,end;cin>>start.fs>>start.sc>>end.fs>>end.sc;
        vis[start.fs][start.sc]=true;
        queue<pii> q;
        q.push(start);
        while(!q.empty()) {
            pii cur=q.front();
            q.pop();
            for(int i=0;i<4;i++) {
                int next_x=cur.fs+dir[i].fs;
                int next_y=cur.sc+dir[i].sc;
                if(next_x<r&&next_y<c&&next_x>=0&&next_y>=0) {
                    if(!vis[next_x][next_y]&&!bomb[next_x][next_y]) {
                        vis[next_x][next_y]=true;
                        dist[next_x][next_y]=dist[cur.fs][cur.sc]+1;
                        q.push({next_x, next_y});
                    }
                }
            }
        }
        cout << dist[end.fs][end.sc] << '\n';
        bomb.clear();
        dist.clear();
        vis.clear();
        bomb.resize(n+1, vector<int>(n+1, 0));
        dist.resize(n+1, vector<int>(n+1, 0));
        vis.resize(n+1, vector<bool>(n+1, 0));
    }
}

signed main() {
    suffering_leaves_suffering_leaves

    solve();
}
