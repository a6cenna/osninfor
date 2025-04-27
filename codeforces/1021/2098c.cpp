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

const int MAX=1e9;

void solve() {
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    bool win=false;
    // int freq[MAX]={0};
    // for(int i=0;i<n;i++) {
    //     freq[a[i]]++;
    // }
    sort(a,a+n);
    // set<int> st;
    // int hari=0;
    // for(int i=0;i<n;i++){
    //     if(!st.count(a[i])) {
    //         st.insert(a[i]);
    //         hari++;
    //         if(freq[a[i]]>3) {
    //             win=true;
    //             break;
    //         }
    //     }
    // }
    // if(!win) {
    //     int r=0;
    //     int cnt=0;
    //     for(int l=0;l<hari;l++) {
    //         while(r<hari&&freq[r])
    //     }
    // }

    vector<int> hari;
    vector<int> freq;
    for(int i=0;i<n;i++) {
        int temp=i+1;
        while(temp<n&&a[i]==a[temp]) temp++;
        hari.pb(a[i]);
        freq.pb(temp-i);
        i=temp-1;
    }
    for(int i=0;i<freq.size();i++) {
        if(freq[i]>3) {
            win=true;
            break;
        }
    }
    if(!win) {
        int banyak=hari.size();
        int dua=0;
        if(freq[0]>1) dua++;
        for(int i=1;i<banyak;i++) {
            if(hari[i]!=hari[i-1]+1) {
                dua=0;
            }
            if(freq[i]>1) dua++;
            if(dua>1) {
                win=true;
                break;
            }
        }
    }

    cout << (win?"YES":"NO") << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
