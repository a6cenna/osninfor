// author: sofwant || a6cenna
// created at 28/04/2025
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
    int a[14]={0};
    for(int i=0;i<7;i++) {
        int x;cin>>x;
        a[x]++;
    }
    int threecard=0;
    int twocard=0;
    for(int i=1;i<=13;i++) {
        if(a[i]>2) threecard++;
        else if(a[i]>1) twocard++;
    }

    cout << ((threecard&&twocard) || (threecard>1) ? "Yes" : "No") << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
