#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("diamond.in", "r", stdin);
    freopen("diamond.out", "w", stdout);

    int n,k;cin>>n>>k;

    int diamond[n];
    for(int i=0;i<n;i++) {
        cin>>diamond[i];
    }    
    // sort first then use if to check from i to j (two loops)

    sort(diamond, diamond+n);

    int maxi=0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            if(diamond[i]-diamond[j]<=k) {
                maxi=max(maxi,i-j+1);
            }
        }
        
    }
    cout << maxi;
}
