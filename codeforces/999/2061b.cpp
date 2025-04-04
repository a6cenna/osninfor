// author: sofwant || a6cenna
// created at 04/04/2025
// suffering leaves suffering leaves.

#include <bits/stdc++.h>
using namespace std;

#define suffering_leaves_suffering_leaves ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back

void solve() {
    int n;cin>>n;
    vector<int> a(n);
    map<int,int> mp;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        mp[a[i]]++;
    }
    vector<int>paired;
    for(auto p:mp) {
        if(p.second>1) paired.pb(p.first);
    }
    if(paired.size()>1) {
        cout << paired[0] << ' ' << paired[0] << ' ' << paired[1] << ' ' << paired[1] << '\n';
    }
    else if(paired.empty()){
        cout << -1 << '\n';
    }
    else {
        vector<int> a1;
        int at=0;
        for(int i=0;i<n;i++) {
            if(a[i]==paired[0] && at < 2) {
                at++;
            }
            else a1.push_back(a[i]);
        }
        int diff=INT_MAX;
        sort(a1.begin(),a1.end());
        pii ans;
        for(int i=0;i<a1.size()-1;i++) {
            diff=min(diff, a1[i+1]-a1[i]);
            if(diff==a1[i+1]-a1[i]){
                ans={a1[i+1], a1[i]};
            }
        }
        if(2*paired[0]<=diff){
            cout << -1 << '\n';
        }
        else {
            cout << paired[0] << ' ' << paired[0] << ' ' << ans.fs << ' ' << ans.sc << '\n';
        }
    }
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
