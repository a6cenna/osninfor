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
    int a[n-1];
    int curr;cin>>curr;
    for(int i=0;i<n-1;i++) cin>>a[i];
    sort(a,a+n-1);
    for(auto x:a) {
        if(curr>=x) continue;
        if((x+curr)%2==1) {
            curr=(x+curr)/2+1;
        }
        else curr=(x+curr)/2;
    }
    cout<< curr << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
