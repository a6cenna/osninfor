// war without reason

#include <bits/stdc++.h>
using namespace std;

#define suffering_leaves_suffering_leaves ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back

void solve() {
    int n,m,a;cin>>n>>m>>a;

    if((a-1)%4==0&&min(n,m)*min(n,m)>=a) {
        int grid[n][m];
        memset(grid,0,sizeof(grid));
        int batas=(a-1)/4;
        int batas1=(a-1)/2;
        for(int j=0;j<batas*2+1;j++) {
            grid[batas][j]=1;
        }
        for(int i=0;i<batas*2+1;i++) {
            grid[i][batas]=1;
        }
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                cout << grid[i][j];
            }
            cout << '\n';
        }
        int sisa=a-batas*4-1;
        for(int i=0;i<ceil((double)sisa/8);i++) {
            grid[i][0]=1;
        }
        for(int i=batas+1;i<batas+1+ceil((double)sisa/8);i++) {
            grid[i][batas*2]=1;
        }
        for(int i=batas+1;i<batas+1+ceil((double)sisa/8);i++) {
            grid[0][i]=1;
        }
        for(int i=0;i<ceil((double)sisa/8);i++) {
            grid[batas*2+1][i]=1;
        }
        for(int i=0;i<sisa/8;i++) {
            grid[0][i]=1;
        }
        for(int i=0;i<sisa/8;i++) {
            grid[batas*2][i]=1;
        }
        for(int i=batas+1;i<sisa/8;i++) {
            grid[i][0]=1;
        }
        for(int i=batas+1;i<batas+1+sisa;i++) {
            grid[i][batas*2]=1;
        }
    }
    else {
        cout << "-1\n";
    }
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
