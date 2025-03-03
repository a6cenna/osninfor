#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int c;cin>>c;
    
    vector<vector<bool>> board(2, vector<bool>(c, false));
    vector<vector<int>> perlu(2, vector<int>(c, 3));
    for(int i=0;i<2;i++) {
        for(int j=0;j<c;j++) {
            int x;cin>>x;
            if(x==1) {
                board[i][j]=true;
                if(i==0 && j%2==0) perlu[1][j]--;
                if(j<c-1) perlu[i][j+1]--;
                if(j>0) perlu[i][j-1]--;
                if(i==1 && j%2==0) perlu[0][j]--;
            }
        }
    }
    int ans=0;
    for(int i=0;i<2;i++) {
        for(int j=0;j<c;j++) {
            if(board[i][j]) ans+=perlu[i][j];
        }
    }

    cout << ans << '\n';
}
