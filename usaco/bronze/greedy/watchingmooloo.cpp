#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n,k;cin>>n>>k;
    long long akhir;cin>>akhir;
    long long biaya=k+1; // hari pertama keitung
    for (int i = 1; i < n; i++)
    {
        long long x;cin>>x;
        if(x-akhir<1+k){
            biaya+=x-akhir;
        }
        else {
            biaya+=1+k;
        }
        akhir = x;
    }
    
    cout << biaya << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
