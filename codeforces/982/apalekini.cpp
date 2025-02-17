#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    bool isHas=false;
    for (int i=2;i <= n; i++) {
        int x=0;
        while(n%i==0) {
            x++;
            n/=i;
        }
        if(x!=0 && !isHas) {
            cout<<i;
            isHas=true;
        }
        else if(x!=0 && isHas) {
            cout<<" x "<<i;
        }
        if(x>1) {
            cout << "^" << x;
        }
    }
}

int main() {
    solve();
}
