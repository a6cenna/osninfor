#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("herding.in", "r", stdin);
    freopen("herding.out", "w", stdout);

    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    sort(a,a+n);
    int r=0;
    int ansmin=INT_MAX;
    // for(int l=0;l<n;l++) {
    //     if(r-l<a[r]-a[l] && r-l-1>=n-2) {
    //         while(r-l<=a[r]-a[l] && r-l-1>=n-2) {
    //             l++;
    //         }
    //         ansmin=min(ansmin, n-r-1);
    //     }
    //     else {
    //         r++;
    //         if(r>=n) break;
    //     }
    // }
    if(a[n-2]-a[0]+1==n-1 && a[n-1]-a[n-2]>2){
        ansmin=2;
    }
    else if(a[n-1]-a[1]+1==n-1 && a[1]-a[0]>2) {
        ansmin=2;
    }
    else {
        for(int l=0;l<n;l++) {
            while(r<n-1 && a[r+1]-a[l]<n) {
                r++;
            }
            ansmin=min(ansmin, n-(r-l+1));
        }
    }

    int gap=0;
    for(int i=0;i<n-1;i++) {
        gap+=a[i+1]-a[i]-1;
    }
    int ansmax=max(gap-(a[1]-a[0]-1), gap-(a[n-1]-a[n-2]-1));

    cout << ansmin << '\n' << ansmax;
}
