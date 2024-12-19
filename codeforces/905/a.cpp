#include <bits/stdc++.h>

using namespace std;

void solve()  {
    int ans=0;
    //start with 1 then continue from the last
    int last=1;
    int x;cin>>x;
    for (int i = 3; i >=0; i--)
    {
        int d=x/((int)pow(10,i))%10;
        if(d==0) d=10;
        ans+=abs(d-last)+1;
        last = d;
    }

    cout << ans << "\n";
}

int main() {
    int t;cin>>t;

    while(t--) {
        solve();
    }
}
