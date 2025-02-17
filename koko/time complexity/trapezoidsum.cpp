#include <bits/stdc++.h>

using namespace std;

const int MAXAB=1000000;

void solve() {
    int n;cin>>n;

    // deret aritmatika?

    long long ans=0;
    for(int i=0;i<n;i++) {
        int a,b;cin>>a>>b;
        int n=b-a+1;
        ans+=(1LL*n*(2LL*a+n-1))/2;
    }

    cout << ans << '\n';
}

// void solve() {
//     int n;cin>>n;
    
//     vector<int> diff(MAXAB, 0);
//     for(int i=0;i<n;i++) {
//         int l,r;cin>>l>>r;
//         diff[l]++;
//         diff[r+1]--;
//     }

//     long long temp=0;
//     long long ans=0;

//     for(int i=1;i<=MAXAB;i++) {
//         temp+=diff[i];
//         ans+=temp*i;
//     }

//     cout << ans << '\n';
// }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
