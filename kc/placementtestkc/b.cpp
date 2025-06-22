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
    int x;cin>>x;

    int grid[9][9];

    int sum=0;

    for(int i=1;i<=9;i++) {
        for(int j=1;j<=9;j++) {
            sum+=i*j;
            if(i*j==x) {
                sum-=x;
            }
        }
    }

    cout << sum;
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
