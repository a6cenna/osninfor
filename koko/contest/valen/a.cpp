#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    int freq[2*n+2] ={0};
    for(int i=0;i<2*n+1;i++) {
        int x;cin>>x;
        freq[x]++;
    }
    for(int i=0;i<2*n+1;i++) {
        // cek angka yang ada di 
        if(freq[i]==1) {
            cout << i << '\n';
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
