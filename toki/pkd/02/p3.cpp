#include <bits/stdc++.h>

using namespace std;

int main() {
    long long b,k;cin >> b >> k;
    
    long long x=k-b;
    for(int i=60;i>=0;i--) {
        long long pangkat = pow(2,i);
        if (pangkat<=x) {
            cout << pangkat<<endl;
            x-=pangkat;
        }
    }
}
