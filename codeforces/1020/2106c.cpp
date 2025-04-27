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
    int n,k;cin>>n>>k;
    map<int,int> mp;
    bool can=true;
    int acuan=-1;
    int a[n],b[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    // bool alr[k+1]={false};
    // for(int i=0;i<n;i++) {
    //     if(!alr[a[i]] && b[i]!=-1){
    //         alr[a[i]]=true;
    //         mp[a[i]]=b[i];
    //     }
    //     else if(alr[a[i]] && b[i]!=-1) {
    //         if(mp[a[i]]!=b[i]) {
    //             can=false;
    //         }
    //     }
    // }
    for(int i=0;i<n;i++) {
        if(acuan==-1&&b[i]!=-1) acuan=a[i]+b[i];
        if(acuan!=-1&&b[i]!=-1) {
            if(a[i]+b[i]!=acuan) {
                can=false;
                break;
            }
        }
    }
    if(acuan==-1) {
        int mina=INT_MAX;
        int maxa=INT_MIN;
        for(int i=0;i<n;i++) {
            mina=min(mina,a[i]+k);
            maxa=max(maxa,a[i]);
        }
        cout << mina-maxa+1 << '\n';
        return;
    }
    if(can) {
        for(int i=0;i<n;i++) {
            if(b[i]==-1) {
                int need=acuan-a[i];
                if(need<0||need>k){
                    cout << 0 << '\n';
                    return;
                }
            }
        }
        cout << 1 << '\n';
    }
    else cout << 0 << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
