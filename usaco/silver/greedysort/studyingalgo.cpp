#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x;cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    sort(a, a+n);
    int at=0;
    while(x-a[at]>=0 && at<n) {
        x-=a[at];
        at++;
    }

    cout << at;
}
