// author: sofwant || a6cenna
// created at 28/3/2025
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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // freopen("filename.in", "r", stdin);
    // freopen("filename.out", "w", stdout);

    int n,q;cin>>n>>q;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    int a,b;
    while(q--) {
        cin>>a>>b;
        cout << upper_bound(arr, arr+n, b)-lower_bound(arr, arr+n, a) << '\n';
    }
}
