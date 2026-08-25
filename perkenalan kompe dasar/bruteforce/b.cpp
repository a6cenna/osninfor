// war without reason

#include <bits/stdc++.h>
using namespace std;

#define suffering_leaves_suffering_leaves ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fs first
#define sc second
#define pb push_back

int n,k;

vector<int> hasil(10);

void coba(int cur) {
    if(cur>k) {
        for(int i=1;i<=k;i++) cout << hasil[i] << ' ';
        cout << '\n'; 
    }
    else {
        for(int i=hasil[cur-1]+1;i<=n;i++) {
            hasil[cur]=i;
            coba(cur+1);
        }
    }
}

void solve() {
    cin>>n>>k;
    coba(1);
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
