#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("outofplace.in", "r", stdin);
    freopen("outofplace.out", "w", stdout);

    int n;cin>>n;
    int a[n], b[n];
    // first we should know where is bessie
    int bessie_at=n-1;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        b[i]=a[i];
        if(i>0) {
            if(a[i]<a[i-1]) {
                bessie_at=i;
            }
        }
    }
    // we go back from bessie
    // if there are a consecutive number count as one
    int ans=0;
    // for (int i = bessie_at-1; i >=0; i--)
    // {
    //     if(a[bessie_at] < a[i]) {
    //         while(a[i]==a[i-1] && i > 0) {
    //             i--;
    //         }
    //         ans++;
    //     }
    // }

    sort(b, b+n);

    for (int i = 0; i < n; i++)
    {
        if(a[i]!=b[i]) {
            ans++;
        }
    }
    
    
    cout << ans-1;
}
