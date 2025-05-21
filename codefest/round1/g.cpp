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
    pii time[n];
    for(int i=0;i<n;i++) {
        cin>>time[i].sc>>time[i].fs;
    }
    sort(time, time+n);
    int curr=0;
    int ans=0;
    for(int i=0;i<n;i++) {
        if(time[i].sc>=curr) {
            curr=time[i].fs;
            ans++;
        }
    }
    cout << ans << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
