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
    int posm, posn;
    for (int c=1;c<=5;c++){
        fill(v.begin(), v.end(), vector<bool>(n, false));
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                t=0;
                klik(i,j,c);
                maxt = max(maxt, t * (t - 1));
                if(maxt==t*(t-1)) {
                    posm=i;
                    posn=j;
                }
            }
            
        }
        
    }
    fill(v.begin(), v.end(), vector<bool>(n, false));
    klik(posm, posn, papan[posm][posn]);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(v[i][j]) {
                papan[i][j]=0;
            }
        }
    }
    for(int j=0;j<n;j++) {
        int empty=m-1;
        for (int i = m-1; i >=0; i--)
        {
            if(papan[i][j]!=0) {
                if(i!=empty) {
                    papan[empty][j]=papan[i][j];
                    papan[i][j]=0;
                }
                empty--;
            }
        }
        
    }
    
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(papan[i][j]!=0) {
                cout<<papan[i][j] << " ";
            }
            else cout << '.'<< " ";
        }
        cout << endl;
    }
}
