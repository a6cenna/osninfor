#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n,x;cin>>n>>x;
    pair<int,int> a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i].first;
        a[i].second=i;
    }
    sort(a,a+n);
    // int l=0,r=n-1,curr=0;
    
    // while(l<r) {
    //     curr=a[l].first+a[r].first;
    //     for(int i=0;i<n;i++) {
    //         if(i==l||i==r) continue;
    //         int temp=curr+a[i].first;
    //         if(temp==x) {
    //             cout << min(a[l].second+1,a[r].second+1) << " " << max(a[l].second+1,a[r].second+1);
    //             return;
    //         }
    //     }
    //     if(curr>x) r--;
    //     else if (curr<x)l++;
    // }
    for(int i=0;i<n;i++) {
        int l=0,r=n-1;
        while(l<r) {
            int temp=x-a[i].first;
            if(i!=l &&i != r && a[l].first + a[r].first == temp) {
                cout << a[i].second+1 << " " << a[l].second+1 << " " << a[r].second+1 << '\n'; 
                return;
            }
            else if(a[l].first + a[r].first > temp) r--;
            else l++;
        }
    }
    cout << "IMPOSSIBLE";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
