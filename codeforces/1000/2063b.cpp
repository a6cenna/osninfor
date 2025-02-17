#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n,l,r;cin>>n>>l>>r;
    vector<int> al;
    vector<int> ar;
    for(int i=0;i<n;i++) {
        int a;cin>>a;
        if(i<r) {
            ar.push_back(a);
        }
        if(i>l-2) al.push_back(a);
    }
    sort(al.begin(), al.end());
    sort(ar.begin(), ar.end());

    long long ansl=0;
    long long ansr=0;
    for(int i=0;i<r-l+1;i++) {
        ansl+=al[i];
    }
    for(int i=0;i<r-l+1;i++) {
        ansr+=ar[i];
    }

    cout << min(ansl, ansr) << '\n';
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
