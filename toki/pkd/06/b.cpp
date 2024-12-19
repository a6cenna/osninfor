#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;cin>>n;
    int x[n], y[n];
    for(int i=0;i<n;i++) {
        cin >> x[i];
    }
    for(int i=0;i<n;i++) {
        cin >> y[i];
    }
    sort(x,x+n,greater());
    sort(y,y+n);
    int scale=0;
    for(int i=0;i<n;i++) {
        scale+=x[i]*y[i];
    }
    cout << scale;
} 
