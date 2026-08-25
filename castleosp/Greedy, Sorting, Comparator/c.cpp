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

void solve() {
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    int cnt=0;
    for(int i=0;i<n;i++) {
        while(i+1<n&&a[i+1]==a[i]) i++;
        cnt++;
    }

    cout << cnt << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
