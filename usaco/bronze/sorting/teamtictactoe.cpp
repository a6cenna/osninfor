#include <bits/stdc++.h>

using namespace std;

char table[3][3];
set<char> ans1,ans2;

// void check1() {
//     // diagonal 1 top left to bottom right
//     if(table[0][0]==table[1][1]==table[2][2] && !ans1.count(table[0][0])) {
//         ans1.insert(table[0][0]);
//     }
//     if(table[0][0]==table[1][1]==table[2][2] && !ans1.count(table[0][0])) {
//         ans1.insert(table[0][0]);
//     }
// }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("tttt.in", "r", stdin);
    freopen("tttt.out", "w", stdout);

    // for (int i = 0; i < 3; i++)
    // {
    //     string s;cin>>s;
    //     for(int j=0; j< 3; j++) {
    //         table[i][j]=s[j];
    //     }
    // }
    // check1();

    set<char> ans1;
    set<set<char>> ans2;

    set<char> row[3];
    set<char> col[3];
    set<char> diag[2];

    for (int i = 0; i < 3; i++) // i = row  
    {
        string s;cin>>s;
        for(int j=0; j< 3; j++) { // j column
            table[i][j]=s[j];
            row[i].insert(s[j]);
            col[j].insert(s[j]);
        }
    }
    // row
    for (int i = 0; i < 3; i++)
    {
        if(row[i].size()==1) {
            ans1.insert(*row[i].begin());
        }
        else if(row[i].size()==2) {
            ans2.insert(row[i]);
        }
    }
    // col
    for (int i = 0; i < 3; i++)
    {
        if(col[i].size()==1) {
            ans1.insert(*col[i].begin());
        }
        else if(col[i].size()==2) {
            ans2.insert(col[i]);
        }
    }
    diag[0].insert(table[0][0]);
    diag[0].insert(table[1][1]);
    diag[0].insert(table[2][2]);
    diag[1].insert(table[0][2]);
    diag[1].insert(table[1][1]);
    diag[1].insert(table[2][0]);
    for (int i = 0; i < 2; i++)
    {
        if(diag[i].size()==1) {
            ans1.insert(*diag[i].begin());
        }
        else if(diag[i].size()==2) {
            ans2.insert(diag[i]);
        }
    }
    cout << ans1.size() << '\n' << ans2.size();
}
