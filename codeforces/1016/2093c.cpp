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

// const int MAX=1e7;

// vector<bool> isprime(MAX+1, true);

bool isprime(int x) {
    for(int i=2;i*i<=x;i++) {
        if(x%i==0) return false;
    }
    return x>=2;
}

void solve() {
    int x,k;cin>>x>>k;
    cout << ((k==1&&isprime(x)) || (k==2&&x==1) ?"YES\n":"NO\n");
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    // isprime[0]=false;
    // isprime[1]=false;

    // for(int i=2;i<=MAX;i++) {
    //     if(isprime[i] && (ll)i*i<=MAX) {
    //         for(ll j=i*i;j<=MAX;j+=i) {
    //             isprime[j]=false;
    //         }
    //     }
    // }

    while(t--) {
        solve();
    }
}
