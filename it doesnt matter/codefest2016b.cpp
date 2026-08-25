// in the pool

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
    int n,a,b;cin>>n>>a>>b;
    string s;cin>>s;
    int cnt=0;
    int cntb=0;
    for(int i=0;i<n;i++) {
        if(s[i]=='c') {
            cout << "No" << '\n';
        }
        else if(s[i]=='a'&&cnt<a+b) {
            cout << "Yes" << '\n';
            cnt++;
        }
        else if(s[i]=='b'&&cnt<a+b&&cntb<b) {
            cout << "Yes" << '\n';
            cntb++;
            cnt++;
        }
        else cout << "No" << '\n';
    }
}

int main() {
    suffering_leaves_suffering_leaves

    solve();
}
