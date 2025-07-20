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
#define ti5 tuple<int,int,int,int,int>

pii dir[4]={{0,1}, {1,0}, {-1,0}, {0, -1}};

void solve() {
    int n,m;cin>>n>>m;
    int dist[n+1][m+1][4][4][4];
    memset(dist, -1, sizeof(dist));
    int blocked[n+1][m+1];
    memset(blocked, 0, sizeof(blocked));
    pii st,end;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            char c;cin>>c;
            if(c=='#') blocked[i][j]=true;
            if(c=='S') st={i, j};
            if(c=='T') end={i, j};
        }
    }
    queue<ti5> q;
    for(int i=0;i<4;i++) {
        for(int j=0;j<4;j++) {
            for(int k=0;k<4;k++) {
                dist[st.fs][st.sc][i][j][k]=0;
                q.push({st.fs,st.sc,i,j,k});
            }
        }
    }
    while(!q.empty()) {
        auto [x, y, p1, p2, p3]=q.front();
        q.pop();
        for(int i=0;i<4;i++) {
            int nx=x+dir[i].fs;
            int ny=y+dir[i].sc;
            
            if(nx<=n&&ny<=m&&nx>0&&ny>0&&!blocked[nx][ny]&&dist[nx][ny][i][p1][p2]==-1) {
                if(p1==p2&&p2==p3&&p3==i) continue;
                if (dist[nx][ny][i][p1][p2]==-1) dist[nx][ny][i][p1][p2]=dist[x][y][p1][p2][p3]+1; 
                else dist[nx][ny][i][p1][p2]=min(dist[nx][ny][i][p1][p2], dist[x][y][p1][p2][p3]+1);
                q.push({nx,ny,i,p1,p2});
            }
        }
    }

    int ans=INT_MAX;
    for(int p1=0;p1<4;p1++) {
        for(int p2=0;p2<4;p2++) {
            for(int p3=0;p3<4;p3++) {
                if(dist[end.fs][end.sc][p1][p2][p3]!=-1) ans=min(ans, dist[end.fs][end.sc][p1][p2][p3]);
            }   
        }
    }
    if(ans==INT_MAX) ans=-1;
    cout << ans << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
