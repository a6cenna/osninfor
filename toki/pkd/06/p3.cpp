#include <bits/stdc++.h> 

using namespace std;

int main() {
    int n;cin>>n;
    string s1,s2;cin>>s1>>s2;

    int gbk[2][3]={0};
    for (int i = 0; i < n; i++)
    {
        if(s1[i]=='G') {
            gbk[0][0]++;
        }
        else if(s1[i]=='B') {
            gbk[0][1]++;
        }
        else {
            gbk[0][2]++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        char a;cin>>a;
        if(s2[i]=='G') {
            gbk[1][0]++;
        }
        else if(s2[i]=='B') {
            gbk[1][1]++;
        }
        else {
            gbk[1][2]++;
        }
    }
    cout << min(gbk[0][0], gbk[1][2]) + min(gbk[0][1], gbk[1][0]) + min(gbk[0][2], gbk[1][1]);
}
