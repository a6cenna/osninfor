#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;cin>>n;
    if(n<3) {
        cout << 0 << endl;
        return 0;
    }

    vector<vector<int>> c(n + 1, vector<int>(4, 0));
    c[0][0]=1;
    
    for(int i=1; i<=n; i++) {
        c[i][0]=1;
        for(int j=1;j<=3&&j<=i;j++) {
            c[i][j]=((c[i-1][j])+(c[i-1][j-1]));
        }
    }
    
    cout << c[n][3];
}
