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
    double n,h;cin>>n>>h;;
    for(int i=1;i<n;i++) {
        double cur=sqrt(h*h*(i/n));
        cout << fixed << setprecision(12) << cur << ' ';
    }
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
