#include <bits/stdc++.h>

using namespace std;

int main() {
    long long a,b,x,y;cin>>a>>b>>x>>y;

    cout << min(2*max(a, x)+2*(b+y), 2*(a+x)+2*max(b, y));
}
