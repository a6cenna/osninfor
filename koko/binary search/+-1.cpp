#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n,q;cin>>n>>q;
    // kok kayak bukan binary search
    int a[n];
    for(int i=0;i<n;i++) {cin>>a[i];}

    sort(a,a+n);
    // oh cari elemen maksimum selisih paling jauh dari x
    // for(int i=0;i<q;i++) {
    //     int x;cin>>x;
    //     int l=0;
    //     int r=n-1;
    //     int mid=l+(r-l)/2;
    //     int ans=INT_MIN;
    //     // case pertama kalau selisih terbesar itu nanti lebih dari x
    //     while(l<=r) {
    //         if(a[mid]!=x) {
    //             ans=max(ans, a[mid]-x);
    //         }
    //     }
    // }
    // kocak

    vector<long long> prefixsum(n+1, 0);
    for (int i = 1; i <= n; i++)
    {
        prefixsum[i]=prefixsum[i-1]+a[i-1];
    }
    

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
