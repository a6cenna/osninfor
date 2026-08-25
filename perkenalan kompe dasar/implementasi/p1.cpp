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
    int n,m,x;cin>>n>>m>>x;
    vector<vector<int>> grid(max(n,m), vector<int>(max(n,m)));
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin>>grid[i][j];
        }
    }
    int jumlah=0;
    int cur_n=n,cur_m=m;
    for(int i=0;i<x;i++) {
        string s;cin>>s;
        if(s.length()>1) {
            jumlah=stoi(s);
            while(jumlah>0) {
            jumlah-=90;
            int tmp=m;
            vector<vector<int>> new_grid(max(n,m), vector<int>(max(n,m)));
            for(int i=0;i<cur_m;i++) {
                for(int j=cur_n-1;j>=0;j--) {
                    new_grid[i][cur_n-1-j]=grid[j][i];
                    // cout << i << ' ' << j << '\n';
                }
            }
            grid=new_grid;
            cur_n=(cur_n==n?m:n);
            cur_m=(cur_m==m?n:m);
        }
        }
        else if(s[0]=='|') {
            vector<vector<int>> new_grid(max(n,m), vector<int>(max(n,m)));
            for(int i=0;i<cur_n;i++) {
                for(int j=0;j<cur_m;j++) {
                    new_grid[i][j]=grid[i][cur_m-j-1];
                }
            }
        grid=new_grid;
        }
        else {
            vector<vector<int>> new_grid(max(n,m), vector<int>(max(n,m)));
            for(int i=0;i<cur_n;i++) {
                for(int j=0;j<cur_m;j++) {
                    new_grid[i][j]=grid[cur_n-i-1][j];
                }
            }
            grid=new_grid;
        }
    }

    for(int i=0;i<cur_n;i++) {
        for (int j=0;j<cur_m;j++) {
            cout << grid[i][j] << ' ';
        }
        cout << '\n';
    }
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
