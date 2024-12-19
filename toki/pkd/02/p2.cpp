#include <bits/stdc++.h>

using namespace std;

int euclid(int a, int b) {
    if(b==0) {
        return a;
    }
    return euclid(b, a%b);
}

int main() {
    int n;cin>>n;
    int ans;cin >> ans;
    for (int i = 1; i < n; i++)
    {
        int x;
        cin>> x;
        ans = ans*x/euclid(ans, x);
    }

    cout << ans;
}
