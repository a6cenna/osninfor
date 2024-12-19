#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,m;cin>>n>>m;
    int a[n];
    int b[m];
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    for(int i=0;i<m;i++) {
        cin >> b[i];
    }
    sort(a,a+n);
    sort(b,b+m);
    int ans=0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(a[i]==b[j] || a[i]+1==b[j]) {
                ans++;
                b[j]=-1;
                break;
            }
        }
    }
    cout << ans;
}
