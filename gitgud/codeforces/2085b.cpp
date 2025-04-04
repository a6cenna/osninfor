// author: sofwant || a6cenna
// created at 30/03/2025
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
    int a[n];
    int first_pos=0;
    int last_pos=n;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        if(a[i]==0) {
            if(!first_pos) first_pos=i+1;
            last_pos=i+1;
        }
    }
    if(first_pos==0){
        cout << "1\n";
        cout << "1 " << n << '\n';
    }
    else if(last_pos!=n) {
        cout << "2\n";
        cout << 1 << ' ' << n-1 << '\n';
        cout << "1 2\n";
    }
    else if(first_pos!=1) {
        cout << "2\n";
        cout << 2 << ' ' << n << '\n';
        cout << "1 " << 2 << '\n';
    }
    else if(first_pos==1&&last_pos==n) {
        cout << "3\n";
        cout << "3 " << n << '\n';
        cout << "1 2\n";
        cout << "1 2\n";
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
