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
    int n;cin>>n;
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        sum+=a[i];
    }
    sum/=n;
    int ans=0;
    int ans1=0;
    for(int i=0;i<n;i++) {
        ans+=pow(a[i]-sum,2);
        ans1+=pow(a[i]-sum-1,2);
    }
    cout << min(ans,ans1) << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
