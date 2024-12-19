#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    int a[2*n];
    for (int i = 0; i < 2*n; i++)
    {
        cin>>a[i];
    }

    sort(a,a+2*n);
    int ans=INT_MAX;
    vector<int> diff;
    for(int i=0;i<2*n;i++) {
        for (int j = i+1; j < 2*n; j++)
        {
            vector<int> remain;
            for (int k = 0; k < 2*n; k++)
            {
                if(k!=i&&k!=j) remain.push_back(a[k]);
            }
            
            int instability = 0;
            for(int k=0;k<2*n-2;k+=2) {
                instability+=remain[k+1]-remain[k];
            }
            ans=min(ans, instability);
        }
    }
    
    cout << ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
