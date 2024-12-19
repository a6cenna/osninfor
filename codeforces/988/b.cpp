#include <bits/stdc++.h>

using namespace std;

void solve() {
    int k;cin>>k;
    vector<int> a(k);
    vector<int> f(k+1);
    for(int i=0;i<k;i++) {
        cin>>a[i];
        f[a[i]]++;
    }
    for (int x = 1; x <= k; x++)
    {
        if(f[x]>0&&(k-2)%x==0) {
            if(f[(k-2)/x]>0) {
                cout << x << " " << (k-2)/x << '\n';
                break;
            }
        }
        
    }
    
} 

int main() {
    int t;cin>>t;
    while(t--) {
        solve();
    }
}
