#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,b;
    cin >> n >> b;
    int h[n];
    for(int i=0;i<n;i++) {
        cin >> h[i];
    }
    sort(h, h+n, greater());
    
    int temp=0;
    int ans=0;
    for(int i=0;i<n;i++) {
        temp+=h[i];
        ans++;
        if(temp>=b) {
            cout << ans;
            break;
        }
    }
}
