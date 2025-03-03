#include <bits/stdc++.h>

using namespace std;

void solve() {
    int diff=0;
    int a[5];
    int adj=0;
    for(int i=0;i<5;i++) cin>>a[i];
    for(int i=0;i<4;i++) {
        if(a[i]!=i+1) diff++;
        if(a[i]!=i+1 && a[i+1]!=i+2) {
            adj=1;
        } 
    } 
    if(a[4]!=5)diff++;

    cout << (diff==2 && adj ? "Yes" : "No");
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
