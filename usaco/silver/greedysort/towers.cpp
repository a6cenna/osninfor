#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;cin>>n;
    int a;cin>>a;
    int ans=1;
    for(int i=0;i<n-1;i++) {
        int x;cin>>x;
        if(x>=a) {
            ans++;
        }
        a=x;
    }

    cout << ans;
}
