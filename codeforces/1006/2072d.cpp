#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];

    int diff=0,l=0,r=0;
    for(int i=0;i<n;i++) {
        int type1=0,type2=0;
        for (int j = i+1; j < n; j++)
        {
            type1+=a[i]>a[j];
            type2+=a[i]<a[j];
            if(diff > type2-type1) {
                diff=type2-type1;
                l=i;r=j;
            }
        }
    }

    cout << l+1 << ' ' << r+1 << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
