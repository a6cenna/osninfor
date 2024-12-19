#include <bits/stdc++.h>

using namespace std;

bool grid[8][8] = {false};
bool d1[15]={false};
bool d2[15]={false};
bool isCol[8]={false};

int counts=0;

void search(int x) {
    if(x==8) {
        counts++;
        return;
    }
    for(int i=0;i<8;i++) {
        if(!grid[x][i] && !isCol[i] && (!d1[i+x] && !d2[x-i+7])) {
            isCol[i]=grid[x][i]=d1[i+x]=d2[x-i+7]=true;
            search(x+1);
            isCol[i]=grid[x][i]=d1[i+x]=d2[x-i+7]=false;
        }
    }
}

int main () {
    for(int i=0;i<8;i++) {
        for (int j = 0; j < 8; j++)
        {
            char x;
            cin>>x;
            if(x=='*') {
                grid[i][j]=true;
            }
        }
    }
    search(0);

    cout << counts;
}
