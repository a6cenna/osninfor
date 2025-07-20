// author: sofwant || a6cenna

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
    map<string,int> mp;
    for(int i=0;i<n;i++) {
        string s;cin>>s;
        if(mp[s]>=1) {
            cout<<s<< mp[s];
        }
        else {
            cout << "OK";
        }
        mp[s]++;

        cout << '\n';
    }
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
