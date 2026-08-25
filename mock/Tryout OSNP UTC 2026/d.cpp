#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pii pair<int,int>
#define pb push_back
#define fs first
#define sc second

void solve() {
    int n;cin>>n;
    string s;cin>>s;
    if(n%2==0) {
        cout << "NOT POSSIBLE\n";
        return;
    }
    // if(n<=2001) {
        int cnt=0;
        string ans;
        for(int i=0;i<n;i++) {
            string tmp=s.substr(0,i)+s.substr(i+1,n-i-1);
            if(tmp.substr(0,n/2)==tmp.substr(n/2,n/2)) {
                if(cnt>0) {
                    if(ans!=tmp.substr(0,n/2)) {
                        cout << "NOT UNIQUE\n";
                        return;
                    }
                }
                ans=tmp.substr(0,n/2);
                cnt++;
            }
        }

        cout << (cnt?ans:"NOT POSSIBLE") << '\n';
    // }
    // else {

    // }
}

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    solve();
}

/*
6 5 8
R 2
C 4
R 5
C 1
R 2
C 4
R 6
C 3
*/
