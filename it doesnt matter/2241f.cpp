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
    int fs1=-1,ls0=-1;
    for(int i=0;i<n;i++) {
        if(fs1==-1&&s[i]=='1') fs1=i;
        if(s[i]=='0') ls0=i;
    }
    if(fs1==-1||ls0==-1||ls0<fs1) {
        cout << "Bob\n";
        return;
    }
    int cnt=1;
    char cur=s[fs1];
    for(int i=fs1+1;i<=ls0;i++) {
        if(s[i]!=cur) {
            if(cnt%2==1) {
                cout << "Alice\n";
                return;
            }
            cnt=1;
            cur=s[i];
        }
        else cnt++;
    }
    
    cout << (cnt%2==1?"Alice":"Bob") << '\n'; 
}

int main() {
    suffering_leaves_suffering_leaves

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}
