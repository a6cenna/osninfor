#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;cin>>n;
    vector<int> pr;
    vector<bool> isPr(n+1, 1);
    isPr[0]=isPr[1]=0;
    for(int i=2;i<=n;i++) {
        for(int j=i*i;j<=n;j+=i) {
            isPr[j]=false;
        }
    }
    cout << (isPr[n]?"PRIEME":"NUH") << '\n';
}
