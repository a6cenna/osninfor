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
    vector<int>freq(n+1,0);
    for(int i=0;i<n;i++) {
        int a;cin>>a;
        if(a<n+1)freq[a]++;
    }
    // multiple
    vector<int>mul(n+1,0);
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j+=i){
            mul[j]+=freq[i];
        }
    }
    sort(mul.begin(),mul.end(), greater<int>());
    cout << mul[0] << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
