// author: sofwant || a6cenna

#include <bits/stdc++.h>
using namespace std;

#define suffering_leaves_suffering_leaves ios::sync_with_stdio(false); cin.tie(nullptr);
#define int ll
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back

pii dir[4]={{0,1}, {1,0}, {-1,0}, {0, -1}};

void solve() {
    int r,c;cin>>r>>c;
    bool blocked[r+1][c+1];
    memset(blocked, 0, sizeof(blocked));
    vector<vector<int>> dist(r+1, vector<int>(c+1, -1));
    vector<vector<int>> trainer(r+1, vector<int>(c+1, 0));
    pii st,end;
    queue<pii> q;
    vector<pii> breeder;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++) {
            char c;cin>>c;
            if(c=='T') blocked[i][j]=true;
            else if(c=='S') st.fs=i,st.sc=j;
            else if(c=='E') end.fs=i,end.sc=j;
            else if(c!='0') {
                breeder.pb({i, j});
                trainer[i][j]=c-'0';
            }
        }
    }
    q.push(end);
    while(!q.empty()) {
        pii cur=q.front();
        q.pop();
        for(int i=0;i<4;i++) {
            int nx=cur.fs+dir[i].fs;
            int ny=cur.sc+dir[i].sc;
            if(nx<=r&&ny<=c&&nx>0&&ny>0) {
                if(dist[nx][ny]==-1&&!blocked[nx][ny]) {
                    dist[nx][ny]=dist[cur.fs][cur.sc]+1;
                    q.push({nx,ny});
                }
            }
        }
    }
    int ans=0;
    for(auto b:breeder) {
        if(dist[b.fs][b.sc]<=dist[st.fs][st.sc]&&dist[b.fs][b.sc]!=-1) {
            ans+=trainer[b.fs][b.sc];
        }
    }

    cout << ans << '\n';
}

signed main() {
    suffering_leaves_suffering_leaves

    solve();
}
