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
    string p,s;cin>>p>>s;
    // vector<bool> dp(s.size()+1, 0); //sampai nggak
    // dp[0]=true;
    // for(int i=0;i<p.size();i++) {
    //     vector<bool>temp(s.size()+1, 0);
    //     for(int j=0;j<=s.size();j++) {
    //         if(!dp[j])continue;
    //         if(j+1<s.size()&&s[j]==p[i]&&s[j+1]==p[i]){
    //             temp[j+2]=true;
    //         }
    //         if(j<s.size()&&s[j]==p[i]){
    //             temp[j+1]=true;
    //         }
    //     }
    //     dp=temp;
    // }
    // if(dp[s.size()]) {
    //     cout << "YES\n";
    // }
    // else cout << "NO\n";
    int n=p.size(), m=s.size();
    int l=0,r=0;
    int yes=true;
    while(l<n&&r<m) {
        int curr=p[l];
        int freqp=0;
        int freqs=0;
        if(s[r]!=curr) {
            yes=false;
            break;
        }
        while(l<n&&p[l]==curr) {
            freqp++;
            l++;
        }
        while(r<m&&s[r]==curr) {
            freqs++;
            r++;
        }
        if(freqs>2*freqp||freqs< freqp) {
            yes=false;
        }
    }
    if(l!=n||r!=m) {
        cout << "NO\n";
        return;
    }
    cout << (yes?"YES\n":"NO\n");
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
