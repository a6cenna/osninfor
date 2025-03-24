#include <bits/stdc++.h>

#define suffering_leaves_suffering_leaves ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

void solve() {
    string s;cin>>s;
    int sum=0;
    int dig_2=0,dig_3=0;
    for(int i=0;i<s.length();i++) {
        int add=s[i]-'0';
        sum+=add;
        if(add==2)dig_2++;
        if(add==3)dig_3++;
    }
    for(int i=0;i<min(9, dig_2+1);i++) {
        for(int j=0;j<min(9, dig_3+1);j++) {
            if((sum+i*2+j*6)%9==0) {
                cout << "YES" << '\n';
                return;
            }
        }
    }
    cout << "NO" << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
