#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    
    vector<int> ans;

    // cek bitsnya

    for(int i=0;i<=19;i++) {
        if(n & (1 << i)) { // check posisi ke ith di n itu 1
            ans.push_back(i+1);
        }
    }

    for (int i=ans.size()-1;i>=0;i--) {
        cout << ans[i] << ' ';
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
