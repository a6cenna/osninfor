#include <bits/stdc++.h>

using namespace std;

int papan[25][25];
vector<vector<bool>> v(25, vector<bool>(25, false));
int t=0;
int m,n;

void klik(int x, int y, int warna) {
    if (x>=0&&x<m&&y>=0&&y<n) {
        if(!v[x][y]) {
            if (papan[x][y]==warna) {
                t++;
                v[x][y]=true;
                klik(x,y+1,warna);
                klik(x+1,y,warna);
                klik(x,y-1,warna);
                klik(x-1,y,warna);
            }
        }
    }
}

int main(){
    cin>>m>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
             cin>>papan[i][j];
        }
    }
    int maxt=0;
    int b,k;cin>>b>>k;
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j <n; j++)
    //     {
    //         t=0;
    //         klik(i, j, papan[b][k]);
    //         maxt=max(maxt, t*(t-1));
    //     }
        
    // }
    klik(b, k, papan[b][k]);
    maxt=t*(t-1);
    cout <<maxt;
}
