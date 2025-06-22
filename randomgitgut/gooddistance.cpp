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
    int n,d;cin>>n>>d;
    int x[n][d];
    
    for(int i=0;i<n;i++) {
        for(int j=0;j<d;j++) {
            cin>>x[i][j];
        }
    }

    int ans=0;

    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            int sum=0;
            for(int k=0;k<d;k++) {
                sum+=(x[i][k]-x[j][k])*(x[i][k]-x[j][k]);
            }
            int temp = sqrt(sum);
            if(temp*temp==sum) ans++;
        }
    }

    cout << ans;
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
