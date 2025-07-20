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

pii dir[]={{0,1}, {1,0}, {-1,0}, {0, -1}};

void solve() {
    int r,c;cin>>r>>c;
    bool blocked[r+1][c+1];
    memset(blocked, 0, sizeof(blocked));
    vector<vector<int>> dist(r+1, vector<int>(c+1, -1));
    vector<vector<int>> distj(r+1, vector<int>(c+1, -1));
    pii st;
    queue<pii> q;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++) {
            char c;cin>>c;
            if(c=='#') blocked[i][j]=true;
            if(c=='J') st.fs=i,st.sc=j;
            if(c=='F') {
                dist[i][j]=0;
                q.push({i, j});
            }
        }
    }
    int cnt=0;
    while(!q.empty()) {
        pii cur=q.front();
        q.pop();
        for(int i=0;i<4;i++) {
            int n_x=cur.fs+dir[i].fs;
            int n_y=cur.sc+dir[i].sc;
            if(n_x<=r&&n_y<=c&&n_x>0&&n_y>0&&!blocked[n_x][n_y]) {
                if(dist[n_x][n_y]==-1) {
                    dist[n_x][n_y]=dist[cur.fs][cur.sc]+1;
                    q.push({n_x, n_y});
                }
            }
        }
    }
    queue<pii> qj;
    distj[st.fs][st.sc]=0;
    qj.push(st);
    while(!qj.empty()) {
        pii cur=qj.front();
        qj.pop();
        for(int i=0;i<4;i++) {
            int n_x=cur.fs+dir[i].fs;
            int n_y=cur.sc+dir[i].sc;
            if(n_x<=r&&n_y<=c&&n_x>0&&n_y>0&&!blocked[n_x][n_y]) {
                if(distj[n_x][n_y]==-1) {
                    distj[n_x][n_y]=distj[cur.fs][cur.sc]+1;
                    qj.push({n_x, n_y});
                }
            }
        }
    }
    int ans=INT_MAX;
    for(int i=1;i<=r;i++) {
        if(distj[i][c]==-1) continue;
        if(dist[i][c]==-1) ans=min(ans, distj[i][c]);
        else if(distj[i][c]<dist[i][c]) ans=min(ans, distj[i][c]);
    }
    for(int i=1;i<=r;i++) {
        if(distj[i][1]==-1) continue;
        if(dist[i][1]==-1) ans=min(ans, distj[i][1]);
        else if(distj[i][1]<dist[i][1]) ans=min(ans, distj[i][1]);
    }
    for(int i=1;i<=c;i++) {
        if(distj[r][i]==-1) continue;
        if(dist[r][i]==-1) ans=min(ans, distj[r][i]);
        else if(distj[r][i]<dist[r][i]) ans=min(ans, distj[r][i]);
    }
    for(int i=1;i<=c;i++) {
        if(distj[1][i]==-1) continue;
        if(dist[1][i]==-1) ans=min(ans, distj[1][i]);
        else if(distj[1][i]<dist[1][i]) ans=min(ans, distj[1][i]);
    }
    if(ans==INT_MAX) cout << "IMPOSSIBLE" << '\n';
    else cout << ans+1 << '\n';
    // for(int i=1;i<=r;i++) {
    //     for(int j=1;j<=c;j++) {
    //         cout << dist[i][j] << ' ';
    //     }
    //     cout << '\n';
    // }
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
