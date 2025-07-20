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
    ll n,k;cin>>n>>k;
    ll a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    string s;cin>>s;
    ll dmg=0;
    for (int i=0; i<n;) {
        vector<ll> pick;
        ll temp=i;
        while (temp<n&&s[temp]==s[i]) {
            pick.push_back(a[temp]);
            temp++;
        }
        sort(pick.rbegin(), pick.rend());
        for (int j=0;j<min((ll)pick.size(), k);j++){
            dmg+=pick[j];
        }

        i=temp;  
    }
    
    cout << dmg << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
