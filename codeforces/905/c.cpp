#include <bits/stdc++.h>

using namespace std;

void solve() {
    /*
    2 3 5 angka prima, pastiin salah satu angka ada yang habis dibagi k selesai
    kalau 4 khusus kalau dibagi 4 sisa 2 = tambah 1, kalau 0 gausah, selain itu tambah 2
    */
   // cek dulu k, terus loop
    int n, k;cin>>n>>k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    int ans=4;
    if(k!=4) {
        for(int i=0;i<n;i++) {
            if(a[i]%k==0) {
                cout << 0 << '\n';
                return;
            }
            ans=min(ans, k-a[i]%k);
        }
    }
    else {
        int cnt=0;
        for (int i = 0; i < n; i++)
        {
            if(a[i]%4==0) {
                ans=0;break;
            }
            for (int j = 1; j < 4; j++)
            {
                if((a[i]+j)%k==0) {
                    ans=min(ans, j);
                }
            }
            if(a[i]%2==0) cnt++;
        }
        if(cnt>1) ans=0;
        if(cnt==1) ans=min(ans,1);
        ans=min(ans,2);
    }
    cout << ans << '\n'; 
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
