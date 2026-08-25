#include <bits/stdc++.h>

using namespace std;

int fastexpo(int x, int y) {
    int res=1;
    while(y) {
        if(y%2==1) res*=x;
        x*=x;
        y/=2;
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x,y;cin>>x>>y;

    cout << fastexpo(x, y) << '\n';
}
