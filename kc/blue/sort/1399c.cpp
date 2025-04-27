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
    // int w[n];
    // for(int i=0;i<n;i++) cin>>w[i];
    // sort(w,w+n);
    vector<int> freq(n+1, 0);
    int x;
    for(int i=0;i<n;i++) {
        cin>>x;
        freq[x]++;
    }
    int ans=INT_MIN;
    for(int sum=2;sum<2*n+1;sum++) {
        int jumlah=0;
        for(int i=1;i<(sum+1)/2;i++){
            if(sum-i>n)continue;
            jumlah+=min(freq[i], freq[sum-i]);
        }
        if(sum%2==0) jumlah+=freq[sum/2]/2;
        ans=max(ans,jumlah);
    }
    // if(n%2==0) {
    //     for(int i=0;i<n/2;i++) {
    //         freq[w[i]+w[n-i-1]]++;
    //     }
    //     for(int i=0;i<freq.size();i++){
    //         ans=max(ans, freq[i]);
    //     }
    // }
    // else {
    //     for(int i=0;i<n/2;i++) {
    //         freq[w[i]+w[n-i-2]]++;
    //     }
    //     for(int i=0;i<freq.size();i++){
    //         ans=max(ans, freq[i]);
    //     }
    //     freq.clear();
    //     freq.resize(w[0]+w[n-1]+1, 0);
    //     for(int i=1;i<n/2+1;i++) {
    //         freq[w[i]+w[n-i]]++;
    //     }
    //     for(int i=0;i<freq.size();i++){
    //         ans=max(ans, freq[i]);
    //     }
    // }

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
