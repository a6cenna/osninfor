#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n,m;cin>>n>>m;
    int s[n];
    for (int i = 0; i < n; i++)
    {
        cin>>s[i];
    }
    // vector<int> prefixsum(n+1, 0);
    // the idea is to check the different of 2 element and change all the previous if it exceed and change max
    // int temp_max=INT_MIN;

    // for (int i = 1; i < n; i++)
    // {
    //     if(abs(s[i]-s[i-1]>m)){
    //         // temp_max=max(s[i], s[i-1]);
    //         if(s[i]>s[i-1]) {
    //             int add=s[i]-m-s[i-1];
    //             s[i-1]=s[i]-m;
    //             for (int j=i-1; j >= 0; j--)
    //             {
    //                 s[j]=s[j]+add;
    //             }
    //         }
    //         else {
    //             s[i]=s[i-1]-m;
    //         }
    //     }
    // }

    for(int i=1;i<n;i++) {
        s[i]=max(s[i], s[i-1]-m);
    }
    for(int i=n-2;i>=0;i--) {
        s[i]=max(s[i], s[i+1]-m);
    }
    for(int si:s) {
        cout << si << " ";
    }
    cout <<'\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
