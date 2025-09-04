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
    int n,s;cin>>n>>s;
    int a[n];
    int freq[3];
    memset(freq, 0, sizeof(freq));
    int sum=0;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        freq[a[i]]++;
        sum+=a[i];
    }
    if(sum==s) {
        cout << -1 << '\n';return;
    }
    if(sum>s) {
        for(int i=0;i<n;i++) {
            cout << a[i] << ' ';
        }
        cout << '\n';return;
    }
    if(s-sum==1) {
        for(int i=0;i<freq[0];i++) {
            cout << 0 << ' '; 
        }
        for(int i=0;i<freq[2];i++) {
            cout << 2 << ' ';
        }
        for(int i=0;i<freq[1];i++) {
            cout << 1 << ' ';
        }
        cout << '\n';return;
    }
    cout << -1 << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
