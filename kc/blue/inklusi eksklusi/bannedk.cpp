#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    int a[n];
    vector<int> freq(n+1, 0);
    long long count=0;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        freq[a[i]]++;
    }
    for(int i=1;i<=n;i++) {
        int x=freq[i]-1;
        count+=1LL*x*(x+1)/2;
    }
    for(int i=0;i<n;i++) {
        cout << count-freq[a[i]]+1 << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
