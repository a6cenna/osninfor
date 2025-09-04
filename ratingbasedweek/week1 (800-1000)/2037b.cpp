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
    int n;cin>>n;
    int freq[n+1];
    memset(freq,0,sizeof(freq));
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
        freq[a[i]]++;
    }
    pii ans={-1,-1};
    for(int i=0;i<n;i++) {
        if((n-2)%a[i]==0&&freq[(n-2)/a[i]]>0) {
            if(a[i]==(n-2)/a[i]) {
                if(!(freq[a[i]]>1)) continue;
            } 
            ans={a[i], (n-2)/a[i]};
            break;
        }
    }
    cout << ans.fs << ' ' << ans.sc << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
