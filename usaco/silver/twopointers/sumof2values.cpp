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
    int l=0,r=n-1,curr=0;
    
    while(l<r) {
        curr=a[l].first+a[r].first;
        if(curr==x) {
            cout << min(a[l].second+1,a[r].second+1) << " " << max(a[l].second+1,a[r].second+1);
            return;
        }
        else if(curr>x) r--;
        else if (curr<x)l++;
    }
    cout << "IMPOSSIBLE";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
