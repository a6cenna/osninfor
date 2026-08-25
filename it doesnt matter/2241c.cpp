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
    int n;cin>>n;
    string s;cin>>s;
    int fs1=-1,fs0=-1,ls1=-1,ls0=-1;
    for(int i=0;i<n;i++) {
        if(fs1==-1&&s[i]=='1') fs1=i;
        if(fs0==-1&&s[i]=='0') fs0=i;
        if(s[i]=='1') ls1=i;
        if(s[i]=='0') ls0=i;
    }
    bool ok=false;
    if(fs0<ls1&&ls1<ls0) ok=true;
    if(fs1<ls0&&ls0<ls1) ok=true;
    if(fs1<fs0&&fs0<ls1) ok=true;
    if(fs0<fs1&&fs1<ls0) ok=true;

    // cout << fs1 << ' ' << ls1 << '\n';

    cout << (fs1==-1||fs0==-1||ok?1:2) << '\n';
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
