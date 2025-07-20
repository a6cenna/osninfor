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
#define ti4 tuple<int,int,int,int>

pii dir[4]={{0,1}, {1,0}, {-1,0}, {0, -1}};

void solve() {
    int R,C;
    while(cin>>R>>C) {
        int rl,cl,rg,cg,rm,cm;cin>>rl>>cl>>rg>>cg>>rm>>cm;
        int dist[R+1][C+1][R+1][C+1];
        bool blocked[R+1][C+1];
        for(int i=1;i<=R;i++) {
            for(int j=1;j<=C;j++) {
                char c;cin>>c;
                if(c=='#') blocked[i][j]=true;
                else blocked[i][j]=false;
                for(int k=1;k<=R;k++) {
                    for(int l=1;l<=C;l++) {
                        dist[i][j][k][l]=-1;
                    }
                }
            }
        }
        queue<ti4> q;
        dist[rg][cg][rm][cm]=0;
        q.push({rg,cg,rm,cm});
        while(!q.empty()) {
            auto [x1,y1,x2,y2] = q.front();
            q.pop();
            for(int i=0;i<4;i++) {
                if(i==0) {
                    pii op={0, -1}; 
                    int nx=x1+dir[i].fs;
                    int ny=y1+dir[i].sc;
                    int nx1=x2+op.fs;
                    int ny1=y2+op.sc;
                    if(nx<=R&&ny<=C&&nx>0&&ny>0&&!blocked[nx][ny]) {
                        if(nx1<=R&&ny1<=C&&nx1>0&&ny1>0&&!blocked[nx1][ny1]) {
                            if(dist[nx][ny][nx1][ny1]==-1) {
                                dist[nx][ny][nx1][ny1]=dist[x1][y1][x2][y2]+1;
                                q.push({nx,ny,nx1,ny1});
                            }
                        }
                        else {
                            if(dist[nx][ny][x2][y2]==-1) {
                                dist[nx][ny][x2][y2]=dist[x1][y1][x2][y2]+1;
                                q.push({nx,ny,x2,y2});
                            }
                        }
                    }
                    else {
                        if(nx1<=R&&ny1<=C&&nx1>0&&ny1>0&&!blocked[nx1][ny1]) {
                            if(dist[x1][y1][nx1][ny1]==-1) {
                                dist[x1][y1][nx1][ny1]=dist[x1][y1][x2][y2]+1;
                                q.push({x1,y1,nx1,ny1});
                            }
                        }
                    }
                }
                else if(i==3) {
                    pii op={0, 1};
                    int nx=x1+dir[i].fs;
                    int ny=y1+dir[i].sc;
                    int nx1=x2+op.fs;
                    int ny1=y2+op.sc;
                    if(nx<=R&&ny<=C&&nx>0&&ny>0&&!blocked[nx][ny]) {
                        if(nx1<=R&&ny1<=C&&nx1>0&&ny1>0&&!blocked[nx1][ny1]) {
                            if(dist[nx][ny][nx1][ny1]==-1) {
                                dist[nx][ny][nx1][ny1]=dist[x1][y1][x2][y2]+1;
                                q.push({nx,ny,nx1,ny1});
                            }
                        }
                        else {
                            if(dist[nx][ny][x2][y2]==-1) {
                                dist[nx][ny][x2][y2]=dist[x1][y1][x2][y2]+1;
                                q.push({nx,ny,x2,y2});
                            }
                        }
                    }
                    else {
                        if(nx1<=R&&ny1<=C&&nx1>0&&ny1>0&&!blocked[nx1][ny1]) {
                            if(dist[x1][y1][nx1][ny1]==-1) {
                                dist[x1][y1][nx1][ny1]=dist[x1][y1][x2][y2]+1;
                                q.push({x1,y1,nx1,ny1});
                            }
                        }
                    }
                }
                else {
                    int nx=x1+dir[i].fs;
                    int ny=y1+dir[i].sc;
                    int nx1=x2+dir[i].fs;
                    int ny1=y2+dir[i].sc;
                    if(nx<=R&&ny<=C&&nx>0&&ny>0&&!blocked[nx][ny]) {
                        if(nx1<=R&&ny1<=C&&nx1>0&&ny1>0&&!blocked[nx1][ny1]) {
                            if(dist[nx][ny][nx1][ny1]==-1) {
                                dist[nx][ny][nx1][ny1]=dist[x1][y1][x2][y2]+1;
                                q.push({nx,ny,nx1,ny1});
                            }
                        }
                        else {
                            if(dist[nx][ny][x2][y2]==-1) {
                                dist[nx][ny][x2][y2]=dist[x1][y1][x2][y2]+1;
                                q.push({nx,ny,x2,y2});
                            }
                        }
                    }
                    else {
                        if(nx1<=R&&ny1<=C&&nx1>0&&ny1>0&&!blocked[nx1][ny1]) {
                            if(dist[x1][y1][nx1][ny1]==-1) {
                                dist[x1][y1][nx1][ny1]=dist[x1][y1][x2][y2]+1;
                                q.push({x1,y1,nx1,ny1});
                            }
                        }
                    }
                }
            }
        }

        if(dist[rl][cl][rl][cl]==-1) cout << "NO LOVE" << '\n';
        else cout << dist[rl][cl][rl][cl] << '\n';
    }
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
