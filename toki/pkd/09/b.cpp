#include <bits/stdc++.h>

using namespace std;

int jk=0;
int jb=0;
int n, m, xk,yk, xb, yb;
char c[501][501];

bool cr[501][501];
bool cr1[501][501];

void dfs(int x, int y) {
    if(cr[x][y]) return;
    cr[x][y]=true;
    jk++;
    if(x>1 && (c[x-1][y]!='#')) {
        dfs(x-1, y);
    }
    if(x<n && (c[x+1][y]!='#')) {
        dfs(x+1, y);
    }
    if(y>1 && (c[x][y-1]!='#')) {
        dfs(x, y-1);
    }
    if(y<m && (c[x][y+1]!='#')) {
        dfs(x, y+1);
    }
}

void dfs1(int x, int y) {
    if(cr1[x][y]) return;
    cr1[x][y]=true;
    jb++;
    if(x>1 && (c[x-1][y]!='#')) {
        dfs1(x-1, y);
    }
    if(x<n && (c[x+1][y]!='#')) {
        dfs1(x+1, y);
    }
    if(y>1 && (c[x][y-1]!='#')) {
        dfs1(x, y-1);
    }
    if(y<m && (c[x][y+1]!='#')) {
        dfs1(x, y+1);
    }
}


int main() {
    cin>>n>>m;
    for(int i=1;i<=m;i++) {
        for(int j=1;j<=n;j++) {
            cin >> c[j][i];
            if(c[j][i]=='B') {
                xb=j;
                yb=i;
            }
            if(c[j][i]=='K') {
                xk=j;
                yk=i;
            }
        }
    }
    
    dfs(xk, yk);
    dfs1(xb,yb);

    if(jb>jk) {
        cout << "B " << jb-jk;
    }
    else if(jk>jb) {
        cout << "K " << jk-jb;
    }
    else {
        cout << "SERI";
    }
}
