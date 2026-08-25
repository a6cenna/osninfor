#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pii pair<int,int>
#define pb push_back
#define fs first
#define sc second

pii dir[4]={{0,1},{1,0},{-1,0},{0,-1}};
const int inf=LLONG_MAX/2;

void solve() {
    int h,w;cin>>h>>w;
    vector<vector<char>> grid(h+1, vector<char>(w+1));
    int cnt=0;
    for(int i=1;i<=h;i++) {
        string s;cin>>s;
        for(int j=1;j<=w;j++) {
            grid[i][j]=s[j-1];
            if(grid[i][j]!='.') cnt++;
        }
    }

    if(grid[1][1]=='.') {
        cout << 0 << '\n';
        return;
    }
    
    vector<vector<int>> dist(h+1, vector<int>(w+1,inf));
    vector<vector<pii>> prv(h+1, vector<pii>(w+1,{-1,-1}));
    deque<pii> dq;
    dq.emplace_back(1,1);
    prv[1][1]={1,1};
    dist[1][1]=0;
    while(!dq.empty()) {
        auto [x,y]=dq.back();
        dq.pop_back();
        for(auto [dirx,diry]:dir) {
            int nxtx=x+dirx,nxty=y+diry;
            if(nxtx>h||nxtx<1||nxty>w||nxty<1) continue;
            if(grid[nxtx][nxty]=='.') continue;
            if(dist[x][y]+(grid[nxtx][nxty]!=grid[x][y])<dist[nxtx][nxty]) {
                prv[nxtx][nxty]={x,y};
                dist[nxtx][nxty]=dist[x][y]+(grid[nxtx][nxty]!=grid[x][y]);
                if(grid[nxtx][nxty]!=grid[x][y]) {
                    dq.emplace_front(nxtx, nxty);
                }
                else {
                    dq.emplace_back(nxtx,nxty);
                }
            }
        }
    }

    int ans=LLONG_MIN/2;
    for(int i=1;i<=h;i++) {
        for(int j=1;j<=w;j++) {
            if(dist[i][j]!=inf)ans=max(ans, dist[i][j]);
        }
    }

    cout << ans+1 << '\n';
}

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    solve();
}

/*
5 8
FFR.....
.FRRR...
.FFFFF..
..RRRFFR
.....FFF
*/
