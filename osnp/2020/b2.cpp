#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;cin>>n;   
    int temp=0;
    string s;cin>>s;
    int jumlah[26]={0};
    for (int i = 0; i < n; i++)
    {
        jumlah[s[i]-'A']++;
    }
    for(int i=0;i<26;i++) {
        if(jumlah[i]==0) temp++;
        if(temp>23) {
            cout << -1;
            return 0;
        }
    }
    sort(jumlah, jumlah+26, greater());
    if(jumlah[0]==jumlah[2]) {
        cout << jumlah[2]*3;
        return 0;
    }
    else if(jumlah[1]==jumlah[2]) {
        cout << jumlah[2]*3+1;
        return 0;
    }
    else cout << jumlah[2]*3+2;
}
