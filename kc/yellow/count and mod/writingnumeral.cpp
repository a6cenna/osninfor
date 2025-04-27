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

const ll MOD=998244353;

ll fastexpo(ll x, ll y) {
    ll res=1;
    while(y){
        if(y%2==1) res=res*x%MOD;
        y/=2;
        x=x*x%MOD;
    }
    return res;
}

void solve() {
    int q;cin>>q;
    ll s=1;
    queue<ll> digit;
    digit.push(1);
    while(q--){
        int quer;cin>>quer;
        if(quer==1){
            int x;cin>>x;
            digit.push(x);
            s=(s*10+x)%MOD;
        }
        else if(quer==2) {
            ll curr=digit.front();
            digit.pop();
            s=s+MOD-curr*fastexpo(10,digit.size())%MOD;
            // if(s<0)s+=MOD;
        }
        else {
            cout << s%MOD << '\n';
        }
    }
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
