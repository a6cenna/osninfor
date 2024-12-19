#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;cin>>n;
    int a[n];
    // check the minimum number, then if there is number that cant be divided then add to new vector
    // if empty output yes, if no check again with next minumum, if found that cant be divided then no

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    vector<int>sisa;
    for (int i = 1; i < n; i++)
    {
        if(a[i]%a[0]!=0) {
            sisa.push_back(a[i]);
        }
    }
    int m=sisa.size();
    for (int i = 1; i < m; i++)
    {
        if(sisa[i]%sisa[0]!=0) {
            cout << "NO" << '\n';
            return;
        } 
    }
    cout << "YES" << '\n';
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
