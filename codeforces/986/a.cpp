#include <bits/stdc++.h>

using namespace std;

void solve() {
    // pake x sama y, kalau e x+=1, w x-=1, n y+=1, s y-=1
    // terus kalau cek a%x==0 dan b%y==0
    int n, a, b;cin>>n>>a>>b;
    string s;cin>>s;
    int x=0, y=0;
    bool bisa=false;
    int p =100;
    for(int j=0;j<100;j++)
    {
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='N') y+=1;
            else if(s[i]=='E') x+=1;
            else if(s[i]=='W') x-=1;
            else y-=1;  
            if(x==a && b==y) bisa=true;
        }
        
    }
    if(bisa) cout << "YES" << '\n';
    else cout << "NO" << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
