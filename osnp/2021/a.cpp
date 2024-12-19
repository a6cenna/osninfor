#include <bits/stdc++.h>

using namespace std;

int euclid(int a, int b) {
    if(b==0) return a;
    else {
        return euclid(b, a%b);
    }
} 

int main() {
    int n,a,b;cin>>n>>a>>b;

    long long kpk=1LL*a*b/euclid(a, b);

    cout << kpk/a+kpk/b;
}
