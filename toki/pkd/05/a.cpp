#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000

int betterPower(int x, int y) {
    if(y==0) return 1;
    if(y%2!=0) {
        return betterPower(x,y-1) * x % MOD;
    }
    else {
        int half=betterPower(x,y/2);
        return half*half % MOD;
    }
}

int main() {
    int a,b;cin>>a>>b;
    
    cout << betterPower(a,b);
}
