// author: sofwant || a6cenna
// created at (date)
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
    int n,x;cin>>n>>x;
    vector<int>freq(n,0);
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a<n) freq[a]++;
    }
    for(int i=0;i<n;i++) {
        if(freq[i]==0){
            cout << i << '\n';
            return;
        }
        if(freq[i]>1&&i+x<n) {
            freq[i+x]+=freq[i]-1;
            freq[i]=1;
        }
    }
    cout << n << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
