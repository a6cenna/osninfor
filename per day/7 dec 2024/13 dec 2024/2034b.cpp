#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n,m,k;cin>>n>>m>>k;
    int need=0;
    string bin;cin>>bin;
    for (int i = 0; i <= n-m;)
    {
        bool strong=false;
        for (int j = i+m-1; j >= i; j--)
        {
            if(bin[j]=='1') {
                strong=true;
                i=j+1;
                break;
            }
        }
        if(!strong) {
            i+=k+m-1;
            need++;
        }
    }
    
    cout << need << '\n';
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
