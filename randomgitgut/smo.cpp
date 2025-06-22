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
    ll n;cin>>n;
    while(n%2==0) n/=2;
    while(n%3==0) n/=3;
    
    if(n==1) cout << "Yes\n";
    else cout << "No\n";
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
