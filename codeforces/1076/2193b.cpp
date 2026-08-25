// in the pool

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
    int a[n];
    int end=-1;
    int start=0;
    int search=-1;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        if(a[i]!=n-i&&search==-1) {
            start=i;
            search=n-i;
        }
        if(a[i]==search) end=i;
    }
    if(search!=-1) reverse(a+start, a+end+1);
    for(auto x:a) {
        cout << x << ' ';
    }
    cout << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
