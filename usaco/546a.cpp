#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int k,n,w;cin>>k>>n>>w;
    int sum=0;
    for(int i=1;i<=w;i++) {
        sum+=i*k;
    }
    
    cout << max(sum-n,0);
}
