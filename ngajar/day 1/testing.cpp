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

int TIGA(int N) {
    if(N<=1) return 1;
    else if(N%3 == 0) {
        return TIGA(N-1) + TIGA(N-3);
    }
    else if(N%3 == 1) return TIGA(N-2);
    else return TIGA(N-3);
}

void solve() {
    int n;cin>>n;
    cout << TIGA(n);
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
