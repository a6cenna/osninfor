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
    vector<int> prime(n+1, true);
    prime[0]=false;
    prime[1]=false;
    for(int i=2;i*i<=n;i++) {
        if(prime[i]) {
            for(int j=i*i;j<=n;j+=i) {
                prime[j]=false;
            }
        }
    }
    vector<int> ans;
    for(int i=1;i<=n;i++) {
        if(prime[i]) {
            int x=1;
            while(x<=n/i) {
                x*=i;ans.pb(x);
            }
        }
    }

    cout << ans.size() << '\n';
    for(auto x : ans) {
        cout << x << ' '; 
    }
    cout << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
